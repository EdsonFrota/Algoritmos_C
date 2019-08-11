#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, t, n;
    int i1=0, i2=0, i3=0, i4=0;

    printf("Informe uma quantidade de números: ");
    scanf("%d", &t);

    for (x=0; x<t; x++) {

        printf("Número: ");
        scanf("%d", &n);

        if ((n < 0) || (n > 100)) {
            printf("404.");
        }

        else {

            if ((n>=0) && (n<=25)) {
                i1++;
            } else
                if ((n>=26) && (n<=50)) {
                    i2++;
                } else
                    if ((n>=51) && (n<=75)) {
                        i3++;
                    } else
                        if ((n>=76) && (n<=100)) {
                            i4++;
                        }
        }
    }

    printf("\n");
    printf("[0-25]: %d\n", i1);
    printf("[26-50]: %d\n", i2);
    printf("[51-75]: %d\n", i3);
    printf("[76-100]: %d\n", i4);


}


