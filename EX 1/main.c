#include <stdio.h>
#include "math_operations.c"
#include "math_operations.h"

int main() {
    int a = 10, b = 5;

    printf("Addition : %d + %d = %d \n", a, b, addition(a,b));
    printf("Soustraction : %d - %d = %d \n", a, b, soustraction(a,b));

    return 0;
}