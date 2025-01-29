#include <stdio.h>

int main()
 {
    int x = 4;
    float y = 1.5;
    float resultat1 = x * y;
    float resultat2 = (float) x * y;

//sans type casting
    printf("Division entre int = %.2f \n",resultat1);
//avec type casting
    printf("Division entre float = %.2f \n",resultat2);

    return 0;
 }