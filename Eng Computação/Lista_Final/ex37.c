#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    int n, x, y;

    printf("Informe uma quantidade de linhas: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {
        for (y=1; y<=x; y++) {
            printf("* ");
        }
        printf("\n");
    }

}


