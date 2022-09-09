// Tableau avec POINTEUR
//
#include <stdio.h>

// declaration avec initialisation
int gv3[3] = {3, 5, 8};
int gv6[6] = {1, 2, 3, 4, 5, 6};
int gv8[8] = {1, 2, 3, 4, 5, 6, 7, 8};

// new: pointeur sur un int (cad un element de int v[])
int *ip;

// Un tableau a 3 dimensions
// dont chaque element est un tableau a 2 dimensions
int gm[3][2] = {{0, 1},
                {2, 3},
                {4, 5}};
int gn[2][3] = {{10, 11, 12},
                {13, 14, 15}};

// Un utilitaire d'affichage, pour matrice (tableau de tableau)
void gmPrint(int *m, int l, int c) {
    // double boucle
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("m[%d][%d] = %d  ", i, j, *m);
            m++; // element suivant
        } // for j
        printf("\n");
    } // for i
} // gmPrint


//
int tableauPointeurMulti(void) {

    // Affichage via la fonction vPrint et vpPrint
    gmPrint(gv6, 1, 6);
    //
    gmPrint(gv3, 1, 3);
    //
    gmPrint(gv8, 1, 8);
    //
    // matrice
    gmPrint(reinterpret_cast<int *>(gm), 3, 2);
    //
    gmPrint(reinterpret_cast<int *>(gn), 2, 3);

    // On peut commencer l'impression au mileur d'un vecteur
    // !!! vous constaterez qqe petits beg d'affichage... de gmPrint
    // aussi, manque de fonctinnalite pour imprimer un *bloc* (sous matrice)
    ip = &gv8[2];
    printf("adrs ip=%p, en hexa=%x\n", ip, ip);
    gmPrint(ip, 1, 2);
    //
    ip = &gn[0][1];
    gmPrint(ip, 1, 2);

    int i = 20;
    int *ip = NULL; //ip=pointeur sur int
    int v[5] = {1, 2, 3, 4, 5};

    // se positionne sur terrain connu (i, avec son contenu)
    ip = &i;
    printf("ip=%p, valeur sous ip=%d\n", ip, *ip);
    // va vers un terrain inconnu
    ip = ip + 2;
    printf("ip=%p, valeur sous ip=%d\n", ip, *ip);

    //
    ip = &v[3]; // sur v[3]
    printf("ip=%p, valeur sous ip=%d\n", ip, *ip);
    ip++; // on est sur v[4]: derniere cellule
    printf("ip=%p, valeur sous ip=%d\n", ip, *ip);
    ip++; // on sort de v, terrain inconnu
    printf("ip=%p, valeur sous ip=%d\n", ip, *ip);
//
    return 0;
}
