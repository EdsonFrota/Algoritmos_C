#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, n, z;
    int maior = 0;
    int menor = 999999;
    int soma = 0;
    float media;

    printf("Informe uma quantidade de valor a ser digitada: ");
    scanf("%d", &z);

    if (z < 3) {
        printf("Informe uma quantidade maior que 3: ");
        scanf("%d", &z);
    }

    for (x=0; x<z; x++) {

        printf("Digite um número: ");
        scanf("%d", &n);

        soma += n;

        if (n > maior) {
            maior = n;
        }

        if (n < menor) {
            menor = n;
        }

    }

    soma = soma - maior - menor;
    media = (float)soma/z;

    printf("A media dos números digitados, excluindo o maior e menor números é: %.2f", media);

}


