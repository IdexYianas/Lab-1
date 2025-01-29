#include <stdio.h>
#include "calcul.h"
#include "calcul.c"
#include "message.c"
#include "message.h"

int main () {
    //apelle a la function message
    afficherBienvenue();
    
    //calcul dune somme
    int a = 10, b = 12;
    printf ("La somme de %d et %d est %d \n", a, b, somme(a, b));

    return 0;
}