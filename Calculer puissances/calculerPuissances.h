#include <cstdio>

void calculer_puissances(double a, double *pDouble, double *pDouble1);

int calculerPuissances(void) {
    double a = 6.3, carre_a, cube_a;
    calculer_puissances(a, &carre_a, &cube_a);
    printf("\n a=%lf - a au carré=%lf - a au cube=%lf", a, carre_a, cube_a);
    return 0;
}

void calculer_puissances(double a, double *pDouble, double *pDouble1) {
    *pDouble = a * a;
    *pDouble1 = a * a * a;
}
