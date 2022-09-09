// 2022 SRN-C
/* -----------------------------------------------
 Traitements relatifs au type "ChainedList
 Ces fonctions sont *independantes*
 de la structure UserRecord
-------------------------------------------------*/

#include <cstdio>
#include <cstdlib>
#include "recordUtils.h"

//
void initialiseList(ChainedList *pl) {
    pl->Head = NULL;
    pl->Tail = NULL;
}

// Create liste avec saisie
void createList(ChainedList *pl) {

    RecordCell *wu; // pointeur de travail

// Boucle de saisie
    char choix[20] = "aaa";

    do {
        wu = (RecordCell *) malloc(sizeof(RecordCell));
        // Controle SYSTEMATIQUE apres malloc
        if (wu == NULL) {
            printf("No enough memory\n");
            exit(1);
        } else {
            if (pl->Tail == NULL) { // 1st Cell
                pl->Tail = wu; // le "curseur" (le dernier) s'y positionne
                pl->Head = wu; //memoriser LE Head dans myList
            } else { // ORDRE a RESPECTER
                // rattachement du old current vers new current
                pl->Tail->next = wu;
                // le curseur est desormais sur le NEW current
                pl->Tail = wu;
            } // if pl->CellNb
        }; // if (wu==NULL)

        // Saisie via Clavier du "Record" courant
        setRecordInteractively(&(pl->Tail->Record));
        pl->Tail->next = NULL; // complete l'instantiation de "RecordCell"
        //fin saisir, next ?
        printf("Continue ? (Quit?) \n");
        scanf("%s", choix);
    } while (!(strcmp(choix, "Quit") == 0)); // while
} // end createList
//
// -----------------------------------------------------
//
// Affichage a l'ecran (stdout)
void showList(ChainedList List) {

    RecordCell *p;
    int i; // compteur cell
    char s[10]; // chaine dans lequel le compteur est converti
    // const pour simplification: 10 plus que suffisant

    if (List.Head == NULL) {
        printf("Liste mal definie\n");
        exit(1);
    }

    p = List.Head;
    i = 1;
    printf("Voici la liste\n");
    while (p != NULL) {
        // indiquer le numero d'ordre pour chaque usager
        sprintf(s, "Ordre %d", i);
        showRecord(s, p->Record);
        p = p->next; // aller a l'unite suivante
        i++;
    };
} // end showList

//
// Enregister la liste (dans un FICHIER deja existant)
//
void saveList(FILE *fp, ChainedList L) {

// controle *autonome*, et salutaire.
// independant d'eventuel controle effectu\'e par ailleurs
    if (fp == NULL) {
        printf("in saveList, file NULL\n");
        exit(1);
    }

    if (L.Head == NULL) {
        printf("Liste mal definie\n");
        exit(1);
    }


    RecordCell *p;
    p = L.Head;

    while (p != NULL) {
        saveRecord(fp, p->Record);
        p = p->next; // aller a l'unite suivante
    };
};





