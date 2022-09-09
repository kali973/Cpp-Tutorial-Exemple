// Strings
//
#include <stdio.h>
// necessaire pour manipuler des strings
#include <string.h>

//
int stringAffect(void) {
    char msg[80] = "IMT"; // remarque: entre" "
    char sx[80]; // declare, non initialis\'e

    // taille non precise: celle de l'initialisation
    char mshort[] = "IMT";

    // sx pas initialise: valeur aleatoire
    printf("Au demarrage: Msg=%s, sx=%s\n", msg, sx);

    // affecation
    // sx = msg; // NON!!! Fonction particuliere
    // affectation: strcpy: copy:  msg => sx:
    // Attention la position: DROITE(msg) vers GAUCHE (sx)
    strcpy(sx, msg);
    //
    printf("Apres strcpy(sx, msg), sx=%s\n", sx);

    // Une chaine "directement"
    strcpy(sx, "IMTIMT");
    printf("sx=%s\n", sx);

    int i;

    // copy:  msg => sx:
    // Attention la position: DROITE(msg) vers GAUCHE (sx)
    strcpy(sx, msg);
    //
    printf("Apres strcpy(sx, msg), sx=%s\n", sx);

    // concatenation: rajouter msg dans la suite de sx
    strcat(sx, msg);
    printf("Apres strcat(sx, msg), sx=%s, ", sx);
    // taille
    printf("sa taille=%d\n", strlen(sx));

    // Comparaison:
    strcpy(sx, "TMI"); // sx = "IMT"
    i = strcmp(sx, msg);
    printf("Comparaison entre sx(%s) et msg(%s) donnant %d => ", sx, msg, i);
    // Attention : vaut 0 "false" logique si Egalite
    if (i == 0) {
        printf("les 2 sont identiques\n");
    } else if (i > 0) {
        printf("sx(%s)> msg(%s) \n", sx, msg);
    } else {
        printf("sx(%s)< msg(%s) \n", sx, msg);
    }
    char myInput[80];

    printf("Une chaine de char SVP \n");
    // Attention: pas de & devant myInput: c'est deja un pointeur
    scanf("%s", myInput);
    printf("Vous avez dit: %s\n", myInput);

    printf("Une autre chaine de char SVP \n");
    // Attention: pas de & devant myInput: c'est deja un pointeur
    scanf("%s", myInput);
    printf("Vous avez dit: %s\n", myInput);

    return 0;
}
