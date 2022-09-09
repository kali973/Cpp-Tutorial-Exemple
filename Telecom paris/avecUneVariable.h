#include <stdio.h>

//
int i = 3; // Declare une variable entiere i avec valeur initiale 3
//
// Rappel: Tout programme C contient 1 et 1 seule fonction main
int avecUneVariable(void) {
    // Rappel: toute instruction se termine par un ";"
    printf("Bonjour \n");
    //
    i = i + 5;
    printf("i devient %d\n", i);
    return 0; //fin d'execution normale
}
