// structure
//
#include <stdio.h>
#include <string.h>

//
typedef struct Usager {
    const char *getNom() const {
        return nom;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Usager::age = age;
    }

    double getTaux() const {
        return taux;
    }

    void setTaux(double taux) {
        Usager::taux = taux;
    }

    char nom[40];
    int age;
    double taux;
} Usager;

// print Usager
// avec typedef: new type Usager, plus besoin de mettre struct
int printUsager(char nvar[], Usager ux) {
    printf("nom var=%s: nom=%s, age=%d, taux=%g\n", nvar, ux.nom, ux.age, ux.taux);
    return 1;
}

//
// *nom <==> nom[]
// utilisation pointeur: car set ==> modif valeur
int setUsager(Usager *ux, char *nom, int age, double taux) {
    strcpy(ux->nom, nom);
    // (*ux). <==> ux->
    //(*ux).age=age;
    (*ux).setAge(age);
    //ux->setAge(age);
    // de preference ->
    //ux->taux=taux;
    //(*ux).setTaux(taux);
    ux->setTaux(taux);
    return 1;
}

//--------------------------

int structAvecFonction(void) {
    // definir une liste (tableau) de 2 usagers
    Usager ut[2];

    // sizeof new type Usager
    printf("taille de cette <structure>: %d\n", sizeof(Usager));

    // utilisation de fonction avec pointeur
    Usager *p;
    p = &ut[0]; // 1er element
    setUsager(p, "TINTIN", 20, 0.21);
    // Rappel operation pointeur: unite = Data
    printf(" 1er element at %p,", p),
            printf(" sa taille:%d, en hexa:%x\n", sizeof(ut[0]), sizeof(ut[0]));
    p++;
    setUsager(p, "MILOU", 2, 0.1);
    printf(" 2er element at %p,", p);
    printf(" sa taille:%d, en hexa:%x\n", sizeof(ut[0]), sizeof(ut[0]));
    // check
    printUsager("ut0", ut[0]);
    printUsager("ut1", ut[1]);

    return 0;
}
