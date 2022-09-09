#include <stdlib.h> /* pour malloc et free */
#include <cstdio>

int allocationDynamique(void) {
    short int n, i;
    double *note;
    double moyenne = 0.;
    printf("\n Entrez le nombre de notes : ");
    scanf("%hd", &n);
    /* réservation dynamique d'une zone de n double: */
    note = (double *) malloc(n * sizeof(double)); /* affectation de note */
    if (note == NULL) {
        printf("\n Pb allocation !");
        exit(0);
    }
    for (i = 0; i < n; i++) {
        printf("\n Tapez la note %hd : ", i);
        scanf("%lf", note + i); /* note+i ou &note[i] */
        moyenne = moyenne + note[i]; /* note[i] équivaut à *(note+i) */
    }
    printf("\n moyenne = %lf", moyenne / n);
    free(note); /*la mémoire récupérée par cette libération pourra être réutilisée*/
    return 0;
}
