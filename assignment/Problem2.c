#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int largestRectangleArea(int* heights, int heightsSize) {
    int n = heightsSize;
    int* sL = (int*)malloc(n * sizeof(int));
    int* sR = (int*)malloc(n * sizeof(int));
    sL[0] = -1, sR[n-1] = n;
    for(int i = 1; i < n; ++i){
        int idx = i-1;
        while(idx >= 0 && heights[idx] >= heights[i])
            idx = sL[idx];
        sL[i] = idx;
    }
    for(int i = n-2; i >= 0; --i){
        int idx = i+1;
        while(idx < n && heights[idx] >= heights[i])
            idx = sR[idx];
        sR[i] = idx;
    }
    int result = 0;
    for(int i = 0; i < n; ++i)
        result = max(result, heights[i]*(sR[i] - sL[i] - 1));
    free(sL);
    free(sR);
    return result;
}

int main() {
    int heights1[] = {2, 4};
    int heightsSize1 = sizeof(heights1) / sizeof(heights1[0]);
    int result = largestRectangleArea(heights1, heightsSize1);
    printf("Input: heights = [2, 4]\nOutput: %d\n", result);

    int heights2[] = {2,1,5,6,2,3};
    int heightsSize2 = sizeof(heights2) / sizeof(heights2[0]);
    int result2 = largestRectangleArea(heights2, heightsSize2);
    printf("\nInput: heights = [2,1,5,6,2,3]\nOutput: %d\n", result2);
}
