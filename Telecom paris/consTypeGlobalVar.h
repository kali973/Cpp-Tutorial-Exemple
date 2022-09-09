#ifndef consTypeGlobalVar_h
#define consTypeGlobalVar_h
// 2022 SRN-C
// Les Constante, Type de data et "variables globales"
// pour la Gestion d'une "BD" sur etudiants:
// avec pour Saisie, sauvegarder, print, ....

// ===============================================
//  ici, les CONST (constantantes)
// definies par leur symboles
// Rappel: (idéalement) jamais de valeur numerique
// cod\'ee en dur dans les lignes de code
//
// le proc\'ed\d'e canonique:
//#ifndef MY_CONST
//#define MY_CONST 8
//#endif
// --- ici, pour ce petit programme
// je me suis permis d'utiliser
// le format simplifi\'e:
#define MAX_NAME_FR 30
#define MAX_FILE_NAME  20
#define MAX_LINE  80
//
// les CONST non utilise dans cette version
// max nb liste suppotees en parallele
//#define MAX_LIST  8
//#define MAX_ADRESS_MAIL 60
//#define MAX_LIST_NAME  20

// ===============================================
// Ici, les TYPES de data
// Le bon choix des TYPES de donnees
// est un element primordial et point
// de depart dans toute programmation
//

/* -- il s'agit ici d'une structure plus
 elaboree que nous avons prise en seance
 que je n'utilise pas, au profit d'une
 structure plus sobre et avec un nom generique

typedef enum{Masculin, Feminin} Genre;
//
typedef enum{ARC, CARC, CYBER2} SpecialiteMaster;

// todo
typedef struct Etudiant{
	char Nom[MAX_NAME_FR];
	int  Age;
	Genre Sex;
	SpecialiteMaster Specialite;
	double Note;
    // ToDo Date: sans doute une struct
    char AdresseMel[MAX_ADRESS_MAIL];
} Etudiant;

-----------fin comment structure Etudiant */

//
// voici cette structure plus sobre
// avec un nom generique:
//
typedef struct UserRecord {
    const char *getName() const {
        return Name;
    }

    int getAge() const {
        return Age;
    }

    void setAge(int age) {
        Age = age;
    }

    double getTaille() const {
        return Taille;
    }

    void setTaille(double taille) {
        Taille = taille;
    }

    char Name[MAX_NAME_FR];
    int Age;
    double Taille;
} UserRecord;


// ------------------------------------------

// Cellules d'une liste chainee
// Avec cette separation
// La cellule (element constituant d'une liste chainee)
// est independante de la semantique du contenu (UserRecord)
// Nous rendons ainsi independant le traitement du contenu
// et le traitement du conteneur (liste chainee)
//
typedef struct RecordCell {
    UserRecord Record;
    struct RecordCell *next;
} RecordCell;

// -----------------------------------------
// Liste Chainee
// cette structure regroupe tous les attribus d'une liste
// Elle rendra sa gestion plus rationnelle et generiue.
// Elle faciltile la gestion de plusieurs listes autant qu'extensions futures
typedef struct ChainedList {
    RecordCell *Head;
    RecordCell *Tail;
    // autres champs possibles
    // non gérés dans cette version
    // char*       Name[MAX_LIST_NAME];
    // int         CellNb; // number of cells
} ChainedList;

// =======================================================
// Nous n'avons pas eu besoin de variable GLOBALE dans ce programme
// De maniere generale, reduir les var globales au strict minimum

#endif

