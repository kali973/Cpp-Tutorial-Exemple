/*  printf: Exemples avec divers Types et Formats */
//
#include <stdio.h>
#include "ressources.h"

//
//int myInt=1;
// Un seul caractere (char): entre ' '
extern const char myChar = 'A';
// Chaine de caracteres,definie avec pointeur (*)
// Chaine de caracteres compris entre " " (et NON ' ')
extern const char *myChain = "IMT";
//
// Pour Real:  PAS FLOAT (4 oct): prb de precision!!!
// Real:  utilise double (8) (voire Long double ...)
extern const double myFloat = 123456789.123456789;
// on peut aussi utiliser l'expression scientifique
//double myDoube=1.123456789e+28;

int printfAall(void)       /*  fonction principale               */
{
// -----  Affichage Int
    // il n'y a pas de \n, ni d'espace: observer l'effet:
    printf(" ceci est myInt %d", myInt);
    // a la ligne et avec indication taille,
    printf(" ceci est myInt %d de taille %d\n", myInt, sizeof(int));
    // avec espace 20 (exag\'er\'e...)
    printf(" ceci est myInt %20d\n", myInt);
// ------  Char et Chain
    printf("myChar=%c, sur %1d octet, ", myChar, sizeof(char));
    printf("sa valeur en decimal= %3d, en hexa=x%2x \n", myChar, myChar);
    printf("myChain=<%10s>, son debut=%p\n", myChain, *myChain);
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

/* ---- Output
ceci est myInt 1ceci est myInt 1 de taille 4
ceci est myInt                    1
myChar=A, sur 1 octet, sa valeur en decimal=  65, en hexa=x41
myChain=<       IMT>, son debut=0x8009a000
myFloat=1.234568e+008, also(f)=123456789.123457, also(g)=1.23457e+008, its size=8
myFloat=  1.2346e+008, also(f)=    123456789.12, also(g)=123456789.1234568
*/
