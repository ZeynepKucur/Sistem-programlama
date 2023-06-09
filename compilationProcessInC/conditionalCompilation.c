/*The preprocessor directives #ifdef, #else, and #endif are part of the C preprocessor.
They are used to conditionally include or exclude code during the preprocessing stage of compilation.

Can create the intermediate file using the following command:
gcc -E conditionalCompilation.c -o conditionalCompilation.i
    The -E flag instructs the compiler to perform only the preprocessing stage and stop before the actual compilation.
    It tells the compiler to execute the preprocessor on the source code file ('filename.c') and generate the preprocessed output.
    file with the .i extension stores the preprocessed output.
    Basically the command tells the compiler to perform the preprocesing stage on the source code file (.c file)
    and save the preprocessed output to the specified intermediate file (.i file). 

 */

#include <stdio.h>

// if we uncomment the below line, then the program will print AGE in the output.
// #define AGE 18

int main()
{
	// if `AGE` is defined then print the `AGE` else print "Not Defined"
	#ifdef AGE
		printf("Age is %d", AGE);
	#else
		printf("Not Defined\n");
	#endif

	return 0;
}
