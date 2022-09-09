/*  Test scanf: Var multiples */
//
#include <stdio.h>

//
int scanfVar(void) {
// déclaration de plusieurs variables
    double ra, rb;
    int ia, ib;
//
    printf("Entry int1, real1, int2 real2\n");

// saisies MULTIPLES: alignement selon l'ordre et format
// les items se separent par un espace, ou pas (% suffit)
// scanf renvoie le nombre de saisies realis\'es
// Remarque: on peut declarer une var a tout moment
//
    int res = scanf("%d %lf %d%lf", &ia, &ra, &ib, &rb);

    // Résultat de l'exécution de scanf: en fait: NOMBRE de saisies
    printf("The return of the function Scanf is %d\n", res);
    //
    printf("ia=%d, ra=%f, ib=%d, rb=%f\n", ia, ra, ib, rb);
//
    return 0;
}
