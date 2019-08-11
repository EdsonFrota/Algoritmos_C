#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, n;

    float far;

    printf("CELSIUS \t FARENHEIT\n\n");

    for (x=-100; x<=100; x+=5) {
        printf("%4d", x);

        far = (1.8 * x) + 32;
        printf("\t\t\%.2f\n", far);

    }

}


