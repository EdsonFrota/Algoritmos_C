#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>



main() {

    setlocale(LC_ALL, "");

    int x, y, p = 1;

    for (x=50; x<=1000; x++) {

        div = 0;

        for (y=1; y<=x; y++) {
            if (x%y == 0) {
                div++;  }
        }

        if (div <= 2) {
            p *= x;
        }
    }

    printf("Produto: %d", &p);
}

