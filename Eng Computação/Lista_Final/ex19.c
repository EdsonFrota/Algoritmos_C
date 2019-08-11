#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x, n[100], maior=0;

    for (x=0; x<100; x++) {
        printf("Digite um número: ");
        scanf("%d", &n[x]);
    }

    for (x=0; x<100; x++) {
        if (n[x] > maior) {
            maior = n[x];
        }
    }

    printf("O maior número é: %d", maior);

}
