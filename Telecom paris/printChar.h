#include <stdio.h>
#include "ressources.h"

int printChar(void) {
    // -------- Char et Chain
    printf("myChar=%c, sur %1d octet, ", myChar, sizeof(char));
    printf("sa valeur en décimal= %3d, en hexa=x%2x \n", myChar, myChar);
    printf("myChain=<%10s>, son début=%p\n", myChain, *myChain);
    return 0;
}
