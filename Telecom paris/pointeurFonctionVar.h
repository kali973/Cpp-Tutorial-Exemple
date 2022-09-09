// POINTEUR
//
#include <stdio.h>
//

int j = 30;

void Reader(int i, int d) {
    printf("Reader: voici la valeur initiale et rajout recues: %d, %d\n", i, d);
    i = i + d;
    printf("La MaJ donne %d, elle se trouve sous %p\n", i, &i);
}

void Writer(int *ip, int d) {
    printf("Writer voici la valeur initiale et rajout recues: %d, %d\n", *ip, d);
    *ip = *ip + d;
    printf("La MaJ donne : %d, elle se trouve sous %p\n", *ip, ip);

}

int pointeurFonctionVar() {
    int i = 20;
    int *ip = NULL;

    printf("i=%d, adresse i=%p\n", i, &i);
    Reader(i, 2);
    printf("i=%d, adresse i=%p\n", i, &i);
    Writer(&i, 2);
    printf("i=%d, adresse i=%p\n", i, &i);

    // j
    printf("j=%d, adresse j=%p\n", j, &j);
    Reader(j, 2);
    printf("j=%d, adresse j=%p\n", j, &j);
    ip = &j; // 2nd forme de passage parametre
    Writer(ip, 2);
    printf("j=%d, adresse j=%p\n", j, &j);
}
