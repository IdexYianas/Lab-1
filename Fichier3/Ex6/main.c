#include <stdio.h>

int main()
 {
    int x = 7;
    int y = 2;
    int resultat1 = x / y;
    float resultat2 = (float) x / y;

//divition entre int
    printf("Division entre int = %d \n",resultat1);
//division entre float
    printf("Division entre float = %.2f \n",resultat2);

    return 0;
 }