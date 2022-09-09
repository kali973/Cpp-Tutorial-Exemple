// POINTEUR
//
#include <stdio.h>

//
int pointeurVarPasReglo() {
    int i = 1234;
    double r = 56.78;
    int *ip = NULL; //ip=pointeur sur int
    double *rp = NULL;

    // pointeur sur int: contenu= int (4 oct), si double, 8 octets, etc.
    printf("taille *ip %d, taille *rp: %d\n", sizeof(*ip), sizeof(*rp));

    // ANCRAGE de ip sur la var i:
    ip = &i; // ip pointe sur i
    rp = &r;
    printf(" int donne par ip: %p, \n", *ip);
    printf(" dble par rp: %p\n", *rp);
    printf(" Role inverse: int donne par rp: %f \n", *rp);
    printf(" dble par ip: %d\n", *ip);

    // warning: affectation avec oubli de &:
    // ip = valeur (et non plus adresse) de i
    // erreur zone memoire plus que probable...
    ip = &i; // ip pointe sur "adresse" qui serait la valeur de i
    printf(" valeur de ip: %p", &ip);
    printf(" int donne par ip: %d, \n", *ip);


    return 0;
}
