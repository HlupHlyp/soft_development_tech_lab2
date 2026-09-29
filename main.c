#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
    char first[255], last[255];
    askname(first, last);
<<<<<<< HEAD
    printf("Hey therrrrre, %s %s!\n", first, last);
=======
    printf("Hey there, %s %s!\n", first, last);
>>>>>>> a43ddebd300eead4ae529d668ef5660398a0082b
    return 0;
}