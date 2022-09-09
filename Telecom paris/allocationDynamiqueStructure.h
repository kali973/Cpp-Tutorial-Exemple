// Chained list (liste cha\^in\'ee)
//

#include <iterator>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Modele (minimaliste) d'un usager
// Une unit\'e de stockage
// illustration ici de l'utilisation de typedef

typedef struct Etudiant {
    const char *getNom() const {
        return Nom;
    }

    int getAge() const {
        return Age;
    }

    void setAge(int age) {
        Age = age;
    }

    Etudiant *getNext() const {
        return next;
    }

    void setNext(Etudiant *next) {
        Etudiant::next = next;
    }

    char Nom[40];
    int Age;
    struct Etudiant *next;
} Etudiant;

// fonction utilitaire
// Sur cell: setting, print, setting interactive
void setParametersP(Etudiant *px, char *nom, int age) {
    strcpy(px->Nom, nom);
    //px->Age = age;
    px->setAge(age);
    px->next = NULL;
}

// interactive
void setParametersI(Etudiant *px) {
    char nom[40];
    int age;
    printf("input nom, age\n");
    scanf("%s %d", nom, &age);
    printf("nom=%s, age=%d\n", nom, age);
    strcpy(px->Nom, nom);
    //px->Age = age;
    px->setAge(age);
    px->next = NULL;
}

// Modif de definition printCell:
// 1: rajout du msg "circonstancie" comme parametre
// 2: passer le pointeur de la cellule (et non plus le contenu)
void printCell(char *msg, Etudiant *p) {
    //printf("%s, nom=%s, age=%d\n", msg, p->Nom, p->Age);
    printf("%s, nom=%s, age=%d\n", msg, p->Nom, p->Age);
}

//--------------------------

int allocationDynamiqueStructure(void) {
    Etudiant *pe; // pointeur etudiant de travail
    Etudiant *ListEtudiant = NULL;
    Etudiant *LastCell = NULL;

    char reponse[] = "Continue";

    while (strcmp(reponse, "Quit")) {

        // creation d'un maillon (AKA => cell)
        pe = (Etudiant *) (malloc(sizeof(Etudiant)));
        //Mandatory
        if (pe == NULL) {
            printf(" no memory \n");
            exit(1);
        }

        setParametersI(pe);

        // 1er element: traitement particulier, car ListEtudiant a fixer
        if (LastCell == NULL) {
            ListEtudiant = pe; // liste fixee
            LastCell = pe;
        } else {
            // Rattachement
            LastCell->next = pe;
            LastCell = pe; // l'element que l'on vient de creer est desormais le last
        }
        //

        printf("Votre choix (<Quit> pour quitter \n");
        scanf("%s", reponse);
    } // while "Quit"

    char s[80];
    int i = 1;
    pe = ListEtudiant;
    while (pe != NULL) {
        sprintf(s, "Cell Number %d", i); // sprintf: printf, mais dans une chaine
        printCell(s, pe);
        pe = pe->next;
        i++;
    }


    //
    return 0;
}
