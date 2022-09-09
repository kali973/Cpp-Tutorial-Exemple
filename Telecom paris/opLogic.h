//  Logic Operator
//
#include <stdio.h>
//#include <panel.h>

//
int opLogic(void) {
    int a = 5;
    int b = 2;
    int c = 5;

    //[True] [1], [False] [0]
    printf(" (a(%d)>b(%d))[%s] [%d] AND a(%d)>c(%d))[%s] [%d] ", a, b, (a > b) ? "True" : "False", (a > b), a, c,
           (a > c) ? "True" : "False", (a > c));
    // Operateur AND : &&
    printf("donne %1s\n", ((a > b) && (a > c)) ? "True" : "False");
    printf(" (a(%d)>b(%d))[%s] OR a(%d)>c(%d))[%s] ", a, b, (a > b) ? "True" : "False", a, c,
           (a > c) ? "True" : "False");
    // Operateur OR : ||
    printf("donne %1s\n", ((a > b) || (a > c)) ? "True" : "False");
    // Operateur NEGATION : !
    printf(" NOT (a(%d) < b(%d))[%1s]  donne %1s\n", a, b, (a < b) ? "True" : "False", !((a < b)) ? "True" : "False");

    return 0;
}

/* ---- output
 (a(5)>b(2))[1] AND a(5)>c(5))[0] donne 0
 (a(5)>b(2))[1] OR a(5)>c(5))[0] donne 1
 NOT (a(5) < b(2))[0]  donne 1
*/