// Operators Arithmetiques
//
#include <stdio.h>

//
int opArithmetiqueDouble(void) {
    //
    // ============Float===============================
    //
    double xa = 5.0;
    double xb = 2.0;
    double xd = 3.0;

    int a = 5;

    // INT + Float => Float
    printf("a(%d)/ b(%.2f) = %.2f\n", a, xb, a / xb);
    printf("a(%.2f)- b(%.2f)*d(%.2f) = %.2f \n", xa, xb, xd, xa - xb * xd);


    //
    return 0;
}
