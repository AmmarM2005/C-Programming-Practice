#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("---- CHARACTER TYPE ----\n");
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);

    printf("\n---- INTEGER TYPE ----\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);

    printf("\n---- FLOAT TYPE ----\n");
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("FLT_DIG (precision): %d decimal digits\n", FLT_DIG);

    printf("\n---- DOUBLE TYPE ----\n");
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("DBL_MAX: %e\n", DBL_MAX);
    printf("DBL_DIG (precision): %d decimal digits\n", DBL_DIG);

    return 0;
}
