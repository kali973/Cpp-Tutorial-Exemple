//  Ctrl: For, While, Do While
//
#include <stdio.h>

//
int CtrlForIndex(void) {

    int i = 9;

    //
    // instancier la var (index) i
    for (int i = 0; i < 3; i++) {
        printf("i = %d\n", i); // i de la boucle
    }

    printf("i = %d\n", i); // celle de "main"

    return 0;
}
