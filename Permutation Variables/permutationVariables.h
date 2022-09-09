#include <cstdio>

void permute(double *ptrX, double *ptrY); /*prototype de la fonction*/

int permutationVariables(void) {
    double a = 10., b = 20.;
    printf(" a=%lf et b=%lf avant la permutation", a, b);
    permute(&a, &b);
    printf("\n a=%lf et b=%lf apres la permutation", a, b);
    return 0;
}

void permute(double *ptrX, double *ptrY) {
    double tampon;
    tampon = *ptrX;
    *ptrX = *ptrY;
    *ptrY = tampon;
}