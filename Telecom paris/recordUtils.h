// 2022 SRN-C
/* -----------------------------------------------
 Traitements relatifs au type "UserRecord" (Record)
 Ces fonctions *dependent* de la structure UserRecord
-------------------------------------------------*/
//
// Afficher (sur l'ecran=stdout) un Record
// avec indication de la nature de chaque champ, precede d'un message (msg)
//

#include <cstring>
#include <cstdio>
#include "consTypeGlobalVar.h"


void showRecord(char *msg, UserRecord ux) {
    printf("%s: nom=%s, age=%d, taille=%f\n", msg, ux.Name, ux.Age, ux.Taille);
}

// Entregistrer un Record dans un FICHIER déjà ouvert(!)
// difference avec showRecord:
// les data brute, PAS d'indication, ni message
void saveRecord(FILE *fp, UserRecord ux) {
    fprintf(fp, "%s %d %g\n", ux.getName(), ux.getAge(), ux.getTaille());
}

// Saisir un record:

// instantiation parametrique
void setRecord(UserRecord *ux, char *nom, int age, double taille) {
    strcpy(ux->Name, nom);
    ux->setAge(age);
    ux->setTaille(taille);
    // showRecord("New Setting", ux);
}

//
// instantiation interactive (via clavier/ecran=stdin/stdout)
//
void setRecordInteractively(UserRecord *ux) {
    char s[MAX_NAME_FR];
    int age;
    double taille;
    //
    printf("Rentrer Nom, age, taille\n");
    // !!! ATTENTION, taill etant un DOUBLE, %lf (ou le, lg)
    scanf("%s %d %lf", s, &age, &taille);
    setRecord(ux, s, age, taille);
    // instruction utile en phase de mise au point
    // showRecord("New Setting", ux);
} // end setRecordInteractively
