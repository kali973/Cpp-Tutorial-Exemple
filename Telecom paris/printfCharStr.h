/*  printf: Exemples avec divers Types et Formats */
//
#include <stdio.h>
#include "ressources.h"

//
// Un seul caractere (char) entre ' '
//char myChar='A';
// Chaine de caracteres,definie avec pointeur (*)
// Chaine de caracteres compris entre " " (et NON ' ')
//char* myChain="IMT";

int printfCharStr(void)       /*  fonction principale               */
{
// ------  Char et Chain
    printf("myChar=%c, sur %1d octet, ", myChar, sizeof(char));
    printf("sa valeur en decimal= %3d, en hexa=x%2x \n", myChar, myChar);
    printf("myChain=<%10s>, son debut=%p\n", myChain, myChain);
    return 0;
}
