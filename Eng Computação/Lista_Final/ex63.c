#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int n;
    float a, q, an;

    printf("Informe o primeiro termo: ");
    scanf("%f", &a);

    printf("Informe a raz�o: ");
    scanf("%f", &q);

    printf("Qual termo deseja saber? ");
    scanf("%d", &n);

    an = a * pow(q, n-1);

    printf("O termo %d� d� progress�o �: %f", n, an);


}


