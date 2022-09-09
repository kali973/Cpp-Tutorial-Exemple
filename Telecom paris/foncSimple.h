// Fonction
//
#include <stdio.h>

//
// Un exemple simple
int myShift(int a, int d) {
    a = a + d;
    return a;
}

//
int foncSimple(void) {
//
    int a = 8, d = 9; // declaration et affectation multiples

    // Appel (utilisation) de la fonction myShift
    printf("a=%d, d=%d, myshift(%d, %d)=%d\n", a, d, a, d, myShift(a, d));

    return 0;
}
