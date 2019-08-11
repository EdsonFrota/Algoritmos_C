#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, y, n;
    int i;

    int somaA = 0, somaB = 0, somaC = 0;

    printf("Informe X: ");
    scanf("%d", &x);

    printf("Informe Y: ");
    scanf("%d", &y);

    scanf("Informe N: ");
    scanf("%d", &n);

    //resposta A
    for (i=1; i<=n; i++) {
        somaA += (x*i);
    }

    //resposta B
    for (i=1; i<=n; i++) {
        somaB += ((x*i) * (y*i));
    }

    //resposta C
    for (i=1; i<=n; i++) {
        somaC += pow((x*i),2);
    }

    printf("\nResposta A: %d", &somaA);
    printf("\nResposta B: %d", &somaB);
    printf("\nResposta C: %d", &somaC);






}

