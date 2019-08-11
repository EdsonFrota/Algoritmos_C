#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int a, b, x, n;
    int qtd = 0, first;

    printf("Informe um valor: ");
    scanf("%d", &a);

    printf("Informe uma quantidade de valores a serem digitados: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {

        printf("Digite um número: ");
        scanf("%d", &b);

        if (b == a) {
            if (qtd == 0) {
                first = x;
                qtd++;
            } else {
                qtd++;
            }
        }
    }

    printf("O número (%d) aparece %d vezes, e sua primeira aparição foi ao digitar o %dº número. ", a, qtd, first);


}


