//  Ctrl: For, While, Do While
//
#include <stdio.h>

//
int CtrlWhileAdv(void) {
    int i;

    // un exemple "while" plus complexe
    do {
        printf("Pls input an int within [3, 9]\n");
        scanf("%d", &i);
    } while (!((i > 9) || (i < 3)));
    printf(" new value of i=%d, bye\n", i);
    // Remarques
    // a) i=0; et While (..) { } peut etre remplace par do {} while ()
    // b) la condition peut s'ecrire avec OR: ((i>9) || (i<3) )

    return 0;
}

