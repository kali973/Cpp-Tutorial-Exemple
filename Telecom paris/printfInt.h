/*  printf: Exemples avec divers Types et Formats */
//
#include <stdio.h>
#include "ressources.h"

//
extern const int myInt = 1;

//
int printfInt(void)       /*  fonction principale               */
{
// -----  Affichage Int
    // il n'y a pas de \n, ni d'espace: observer l'effet:
    printf("Ceci est myInt %d", myInt);
    // a la ligne et avec indication taille,
    printf("ceci est myInt %d de taille %d\n", myInt, sizeof(int));
    // avec espace 20 (exag\'er\'e...)
    printf("ceci est myInt %20d\n", myInt);
    return 0;
}
