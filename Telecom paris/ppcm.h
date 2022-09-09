#include <cstdio>

int ppcm() {
    int nbr1, nbr2, ppcm;

    printf("Entrez deux entiers: ");
    scanf("%d %d", &nbr1, &nbr2);

    ppcm = (nbr1 > nbr2) ? nbr1 : nbr2;

    // Toujours vrai
    while (1) {
        if (ppcm % nbr1 == 0 && ppcm % nbr2 == 0) {
            printf("PPCM de %d et %d = %d", nbr1, nbr2, ppcm);
            break;
        }
        ++ppcm;
    }
    return 0;
}