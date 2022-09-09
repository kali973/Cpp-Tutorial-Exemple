//
// 2022/aout-septembre/SRN-C
// project de synthese
// version simplifiee
// fonctionne comme une commande
// sans menu et dans listes multiples
//
#include <stdio.h>
#include <string.h>
#include "consTypeGlobalVar.h"
#include "filesUtil.h"
#include "chainedListUtil.h"

int applicationMainSynthese(int argc, char **argv) {

    char FileName[MAX_FILE_NAME];
    char mode;  // p=print, c=creer, a=ajout
    FILE *fp;

    ChainedList myList; // une seule liste


/* ---- declaration pour gestion de plusieurs listes
//  Le nombre de liste etant faible
//  leur acces devrait etre le simple possible
// tableau mieux que liste chaine
    ChainedList Lists[MAX_List];
----------------- */

    if (argc < 3) {
        printf("Usage: %s nom-fichier  operation (p=print, c=creer, a=ajout)\n", argv[0]);
        exit(1);
    }

    // nomprog nom-fichier operation
    // operations :

    if (argc < 3) {
        printf("Usage: <%s> nom-fichier, operation", argv[0]);
        printf("(p=print, c=creer, a=ajout)\n");
        exit(0);
    }

    strcpy(FileName, argv[1]);
    mode = argv[2][0];

    // Controles:
    if (strlen(argv[2]) > MAX_FILE_NAME) {
        printf("nom f trog grand\n");
        exit(0);
    }
    // Existence fichier
    if (!(haveFile(FileName))) {
        // le cas 'c': Creation
        if (mode != 'c') {
            printf(" file %s does not exist\n", FileName);
            exit(1);
        } // if mode!=
    } // if !(haveFile)

    //
    initialiseList(&myList);

// differentes operations avec la listechainee "myList"
// simple operation ligne

    switch (mode) {
        //
        case 'a':
        case 'c':
            // Saisir les nouveautes
            createList(&myList); // saisir les nouvelles records
            showList(myList); // affichage
            //
            // puis sauvegarder dans le fichier FileName
            if (mode == 'a') {
                printf("mode=%c, rajout au fichier %s\n", mode, FileName);
                fp = fopen(FileName, "a+");
            } else {
                printf("mode=%c, creation puis rajout fichier %s\n", mode, FileName);
                fp = fopen(FileName, "w+");
            }
            saveList(fp, myList);
            fclose(fp);
            printf("sauvegarde dans %s ok\n", FileName);
            break;
            //
        case 'p':
            // place keeper
            printf("choix=%c, print fichier %s\n", mode, FileName);
            printFile(FileName);
            break;
            //
        default:
            printf("no such option %c\n", mode);
    }     // end switch

    return 0;
}






