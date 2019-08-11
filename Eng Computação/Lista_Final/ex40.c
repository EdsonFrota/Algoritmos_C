#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    int n, x, y, z;

    printf("Informe a quantidade de triangulos: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {
        for (y=1; y<=x; y++) {
            for (z=1; z<=y; z++) {
                printf("* ");
            }
        printf("\n");
        }
    printf("\n\n");
    }

}


