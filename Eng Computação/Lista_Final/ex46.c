#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, n;
    int maior = 0;
    int menor = 999999;

    for (x=0; x<50; x++) {

        printf("Digite um número: ");
        scanf("%d", &n);

        if (n > maior) {
            maior = n;
        }

        if (n < menor) {
            menor = n;
        }

    }

    printf("\nO maior número é: %d\n", maior);
    printf("\nO menor número é: %d\n", menor);

}


