#include <stdio.h>

int scanfTest(void) {
    double mydouble;
    //
    printf("Entry a double\n");
    scanf("%lf", &mydouble);
    printf("myDouble = %f\n", mydouble);
    return 0;
}
