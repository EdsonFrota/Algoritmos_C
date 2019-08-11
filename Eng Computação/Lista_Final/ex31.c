#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int diaA, mesA, anoA;
    int diaB, mesB, anoB;

    int x, y, z;

    printf("Informe o dia inicial: ");
    scanf("%d", &diaA);

    printf("Informe o mês inicial: ");
    scanf("%d", &mesA);

    printf("Informe o ano inicial: ");
    scanf("%d", &anoA);

    printf("Informe o dia final: ");
    scanf("%d", &diaB);

    printf("Informe o mês final: ");
    scanf("%d", &mesB);

    printf("Informe o ano final: ");
    scanf("%d", &anoB);

    for (x=anoA; x<=anoB; x++) {
        for (y=mesA; y<=mesB; y++) {
            for (z=diaA; z<=diaB; z++) {
                printf("%2d \ %2d \ %d \n", z, y, x);
            }
        }
    }





}
