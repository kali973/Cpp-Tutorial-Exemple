//// Tableau
////
//#include <stdio.h>
//
//// declaration avec initialisation
//int gv3[3] = {3, 5, 8};
//int gv6[6] = {1, 2, 3, 4, 5, 6};
//int gv8[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//
//// Un utilitaire d'affichage, pour vecteur (tableau)
//void vPrint(int v[6], unsigned long taille) {
//    for (int i = 0; i < taille; i++) {
//        printf("v[%d] = %d, ", i, v[i]);
//    }
//    printf("\n");
//}
//
////
//int VecteurFoncPrintAdv(void) {
//
//    // Affichage via la fonction vPrint
//    vPrint(gv6, sizeof(gv6) / sizeof gv6[0]);
//    // un vecteur plus court
//    vPrint(gv3, sizeof(gv3) / sizeof gv6[0]);
//    //  un vecteur plus long
//    vPrint(gv8, sizeof(gv8) / sizeof gv6[0]);
//    //
//    // vPrint prend tous les 3, meme si seul gv6 est int v[6]
//    // car type compatible: tableau (vecteur) INT
//    // MAIS, il affiche systematiquement 6 elements
//    // - cas gv3: 3 derniers elements v[3]..v[5]
//    // auront des valeurs aleatoires, car il s'agit des cases
//    // memoires qui SUIVENT celles de gv3[2] mais qui ne font
//    // pas partie de gv3
//    // - cas gv8: les 2 derniers cases sont ignorees
//    //
//
////
//    return 0;
//}
