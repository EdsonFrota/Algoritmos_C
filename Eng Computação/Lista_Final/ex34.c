#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>


main() {

    int x, y;

    for (x=1; x<=10; x++) {
        for (y=1; y<=10; y++) {

            printf("%2d x %2d = %2d\n", x, y, x*y);
        }

        printf("\n\n");
    }


}



