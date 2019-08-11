#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x;
    int n, a;
    int maisAlto = 0, maisBaixo = 999, nAlto, nBaixo;

    for (x=0; x<5; x++) {

        printf("número: ");
        scanf("%d", &n);

        printf("altura: ");
        scanf("%d", &a);

        if (a > maisAlto) {
            maisAlto = a;
            nAlto = n;
            printf("=",n);
        }

        if (a < maisBaixo) {
            maisBaixo = a;
            nBaixo = n;
            printf("=", n);
        }

    }




}

