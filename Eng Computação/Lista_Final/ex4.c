#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x;

    for (x=0; x<50; x++) {
        printf("%d ", rand() );
    }



}
