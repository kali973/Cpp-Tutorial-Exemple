//  Ctrl: For, While, Do While
//
#include <stdio.h>

//
int CtrlForAdv(void) {

// ---- Un exemple de "for" plus complexe
// a): ici, i est mis a 1000 et on fait "count-down"
// b): C permet la modification de l'index i au sein du bloc
    for (int i = 1000; i > 0; i--) {
        printf("i = %d\n", i);
        if ((i < 998) && (i > 940)) {
            printf("i=%d, pls input new i\n", i);
            // new i, donc reduire OU augmenter le nb de cycles...
            scanf("%d", &i);
            printf(" new value of i=%d\n", i);
        }
    }

    return 0;
}
