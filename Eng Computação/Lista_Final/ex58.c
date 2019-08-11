#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int j, x, y;
    float a, b, fx;

    for (j=1; j<=10; j++) {

        x = pow(j,2);

        for (y=1; y<=5; y++) {

            a = pow(x,2) + (3*x) + pow(y,2);

            b = (x*y) - (5*y) - (3*x) + 15;

            fx = a/b;


            printf("Para X: %d e Y: %d, f(x,y): %.2f\n", x, y, fx);

        }

        printf("\n\n");

    }


}


