//// Tableau avec POINTEUR
////
//#include <stdio.h>
//// declaration avec initialisation
//int gv3[3] = {3, 5, 8};
//int gv6[6] = {1, 2, 3, 4, 5, 6};
//int gv8[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//
//// new: pointeur sur un int (cad un element de int v[])
//int* ip;
//
//// Un tableau a 3 dimensions
//// dont chaque element est un tableau a 2 dimensions
//int gm[3][2] = { {0,1}, {2,3}, {4,5} };
//
//// Un utilitaire d'affichage, pour matrice (tableau de tableau)
//void mPrint(int m[3][2])
//{
//    int i, j;
//// double boucle
//    for ( i = 0; i < 3; i++ ) {
//        for ( j = 0; j < 2; j++ ) {
//            printf("m[%d][%d] = %d  ", i,j, m[i][j] );
//        } // for j
//        printf("\n");
//    } // for i
//}
////
//
//// Un utilitaire d'affichage, pour vecteur (tableau)
//void vPrint(int v[6])
//{
//    int i;
//    for ( i = 0; i < 6; i++ ) {
//        printf("v[%d] = %d, ", i, v[i]);
//    }
//    printf("\n");
//}
//
//// !!! Nouveaute avec POINTEUR
//// Affichage FLEXIBLE via pointeur et un indicateur longueur
//// Cette fonction affiche les "l" int A PARTIR
//// de l'adresse pointe par v
////
//void vpPrint(int* v, int l)
//{
//    int i;
//    printf("vpPrint ");
//    for ( i = 0; i < l; i++ ) {
//        printf("v[%d] = %d, ", i, v[i]);
//    }
//    printf("\n");
//}
///*
// * Une fonction de permutation de ses paramètres.
// */
//void swapTest( int * first, int * second ) {
//
//    int temp = *first;
//    *first = *second;
//    *second = temp;
//
//}
//
////
//int tableauPointeur(void)
//{
//    int i, j;
//
//    int *ip=NULL;
//    int* ip2=NULL;
//    double * rp=NULL;
//
//    int v[5]= {1, 2, 3, 4, 5};
//    double w[4]= {1.2,2.4, 2.6, 3.6};
//    ip = &v[3];
//    ip2 = &v[4];
//
//    printf("taille de data pointe par ip=%d\n",v[0], &ip, sizeof(*ip ));
//    printf("taille de data pointe par ip=%d\n",v[0], &ip, sizeof(*rp ));
//
//    printf("1st cell of v=%d, value of ip=%p, *ip=%d\n",v[0], &ip, *ip );
//    printf("1st cell of v=%d, value of ip=%p, *ip=%d\n",v[0], &ip2, *ip2 );
//
//
//    short int a1,b1 ;
//    short int* ptr ;
//    ptr = &a1; /* ptr pointe sur a */
//    a1 = 10 ;
//    b1 = *ptr ; /* met dans b le contenu de l'adresse ptr (10) */
//    *ptr= b1*2 ; /* met la valeur b*2 à l'adresse pointée par ptr (attention aux 2 sens différents de *) */
//    printf(" adresse de a : %p (%u en décimal)", &a1, &a1) ;
//    printf("\n adresse de b : %p (%u en décimal)", &b1, &b1) ;
//    printf("\n adresse de ptr : %p (%u en décimal)", &ptr, &ptr) ;
//    printf("\n\n contenu de ptr : %p", ptr) ;
//    printf("\n\n contenu de a : %hd \n contenu de b : %hd", a1, b1) ;
//    printf("\n contenu de la variable pointée par ptr : %hd", *ptr) ;
//
//    int value = 10;
//    int * pointer = &value;         // Contient l'adresse en mémoire de la variable value
//    printf( "value == %d at %p\n", value, pointer );
//
//    *pointer = 15;
//    printf( "value == %d at %p\n", value, pointer );
//    int a = 10;
//    int b = 20;
//
//    swapTest( &a, &b );
//    printf( "a==%d, b==%d\n", a, b );
//
//    // affichage du contenu d'un tableau sans utiliser vPrint
//    for ( i = 0; i < 3; i++ ) {
//        printf("gv3[%d] = %d, ", i, gv3[i]);
//    }
//    printf("\n"); // fin du vecteur gv, passer a la ligne suivante*
//    //
//    // Affichage via la fonction vPrint et vpPrint
//    vPrint(gv6);
//    vpPrint(gv6, 5);
//    // un vecteur plus court
//    vPrint(gv3);
//    vpPrint(gv3, 3);
//    //  un vecteur plus court
//    vPrint(gv8);
//    vpPrint(gv8, 8);
//    // On peut commencer l'impression au mileur d'un vecteur
//    ip=&gv8[2];
//    printf("adrs ip=%p, en hexa=%x\n", ip, ip);
//    vpPrint(ip, 3);
//
//    //
//    // imprimer la matrice gm
//    mPrint(gm);
//    //
//    // vPrint IMPOSSIBLE car type incompatible! (tableau vs tableau des tableaux)
//     //vPrint(gm);
//
//    // avec vpPrint: possible: grace au pointeur
//    ip=&gm[1][1];
//    vpPrint(ip, 3);
//
////
//    return 1;
//}
///* --- output
//gv3[0] = 3, gv3[1] = 5, gv3[2] = 8,
//v[0] = 1, v[1] = 2, v[2] = 3, v[3] = 4, v[4] = 5, v[5] = 6,
//vpPrint v[0] = 1, v[1] = 2, v[2] = 3, v[3] = 4, v[4] = 5,
//v[0] = 3, v[1] = 5, v[2] = 8, v[3] = 1, v[4] = 2, v[5] = 3,
//vpPrint v[0] = 3, v[1] = 5, v[2] = 8,
//v[0] = 1, v[1] = 2, v[2] = 3, v[3] = 4, v[4] = 5, v[5] = 6,
//vpPrint v[0] = 1, v[1] = 2, v[2] = 3, v[3] = 4, v[4] = 5, v[5] = 6, v[6] = 7, v[7] = 8,
//adrs ip=00403068, en hexa=403068
//vpPrint v[0] = 3, v[1] = 4, v[2] = 5,
//m[0][0] = 0  m[0][1] = 1
//m[1][0] = 2  m[1][1] = 3
//m[2][0] = 4  m[2][1] = 5
//vpPrint v[0] = 3, v[1] = 4, v[2] = 5,
//*/