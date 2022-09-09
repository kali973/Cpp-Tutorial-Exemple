/*  printf: Exemples avec divers Types et Formats */
//
#include <stdio.h>
#include "ressources.h"
//
//
// Pour Real:  PAS FLOAT (4 oct): prb de precision!!!
// Real:  utilise double (8) (voire Long double ...)
//double myFloat=123456789.123456789;
// on peut aussi utiliser l'expression scientifique
//double myDouble=1.123456789e+28;

int printfReel(void)       /*  fonction principale               */
{
// ---- Real sous divers format et précision
    // par defaut: 6 digits apres "." (e.f) ou significative (g)
    printf("myFloat=%e, also(f)=%f, also(g)=%g, its size=%1d \n", myFloat, myFloat, myFloat, sizeof(myFloat));
    //
    // avec le ctrl ".nombre":
    // pour "e" (: 4 digits apres ".", f=2, g=16 digits significatifs
    // Observer AUSSI l'effet d'alignement, obtenus apres qqe essais
    printf("myFloat=%13.4e, also(f)=%16.2f, also(g)=%.16g \n ", myFloat, myFloat, myFloat);
    return 0;
}
