// Operators Arithmetiques
//
#include <stdio.h>

//
int opArithmetiquePlusplus(void) {

    int a = 5;
    int b = 2;

    // Cas particulier des: ++, --
    int ia = a, ib = b; // initial a
    printf("initial(a=%d, b=%d): ", ia, ib);
    // prendre la valeur (affichage) puis opération
    printf("(a++=%d, a= %d), (b--=%d, b= %d)\n", a++, a, b--, b);
    a = ia;
    b = ib; //recovery
    printf("initial(a=%d, b=%d): ", ia, ib);
    // opération puis prendre la valeur (affichage)
    printf("(++a=%d, a= %d), (--b=%d, b= %d)\n", ++a, a, --b, b);
    //
    return 0;
}

