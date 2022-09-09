// Operators Arithmetiques
//
#include <stdio.h>

//
int opArithmetiqueIn(void) {

    int a = 5;
    int b = 2;
    int d = 3;

    // declare c and initialise
    int c = a + b;

    // utiliser une var auxiliaire(c)
    printf("a(%d)+ b(%d) = %d\n", a, b, c);
    // a-b directement, sans passer par c
    printf("a(%d)- b(%d) = %d\n", a, b, a - b);
    //
    printf("a(%d)* b(%d) = %d, ", a, b, a * b);
    printf("a(%d)- b(%d)*d(%d) = %d \n", a, b, d, a - b * d);
    //
    printf("a(%d)/ b(%d) = %d (INTeger result!) \n", a, b, a / b);
    //
    // Modulo : %% pour print %
    // Remarque: NE marcher PAS pour float
    printf("a(%d) %% b(%d) = %d (modulo %d) \n", a, b, a % b, b);
    //
    return 0;
}