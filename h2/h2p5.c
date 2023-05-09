#include <stdio.h>

int maxProfit(int *prices, int pricesSize, int *buyDays, int *sellDays) {
    int profit = 0;
    int buy1 = prices[0], buy2 = prices[0];
    int sell1 = 0, sell2 = 0;
    
    for (int i = 0; i < pricesSize; i++) {
        // calculate first buy and sell days
        if (prices[i] < buy1) {
            buy1 = prices[i];
        } else if (prices[i] - buy1 > sell1) {
            sell1 = prices[i] - buy1;
            sellDays[0] = i;
        }
        
        // calculate second buy and sell days
        if (prices[i] - sell1 < buy2) {
            buy2 = prices[i] - sell1;
            buyDays[1] = i;
        } else if (prices[i] - buy2 > sell2) {
            sell2 = prices[i] - buy2;
            sellDays[1] = i;
        }
    }
    
    // calculate total profit
    profit = sell1 + sell2;
    
    return profit;
}

int main() {
    int prices[] = {1,2,3,4,5};
    int pricesSize = sizeof(prices) / sizeof(prices[0]);
    int buyDays[2] = {0};
    int sellDays[2] = {0};
    int profit = maxProfit(prices, pricesSize, buyDays, sellDays);
    
    printf("Max profit: %d\n", profit);
    printf("Buy days: %d, %d\n", buyDays[0], buyDays[1]);
    printf("Sell days: %d, %d\n", sellDays[0], sellDays[1]);
    
    return 0;
}
