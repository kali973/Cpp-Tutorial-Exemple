/*  -------------------------------------------------
Utilitaire(s) fichiers
------------------------------*/

#include <cstdio>
#include <cstdlib>

// 0 si non inexistant
int haveFile(char *fname) {
    FILE *fp;

    fp = fopen(fname, "r");

    if (fp == NULL) {
        return 0;
    } else {
        fclose(fp);
        return 1;
    }
}

// print le fichier fname
// Attentio, ici, il s'agit d'une fonction elementaire
// d'imprimer le contenu d'un fichier
// sans aucune connaissance de sa semantique
// il ne s'agit surtout pas de saisir une base depuis un fichier
//
void printFile(char *fname) {
// input file
    FILE *fp;
// get input line
    char lineContent[MAX_LINE];

// Open file in "r" mode, i.e. Read Only
// controle *automone*, et salutaire, ici
// independant d'eventuel controle effectu\'e par ailleurs
    fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("in printFile, file %s open error\n", fname);
        exit(1);
    }

    while ((fgets(lineContent, sizeof(lineContent), fp) != NULL)) {
        printf("%s", lineContent);
    }; // while fgets

    fclose(fp);

} // printFile
//
//