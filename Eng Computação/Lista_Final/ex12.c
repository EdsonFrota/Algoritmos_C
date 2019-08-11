#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main () {

    setlocale(LC_ALL, "");

    int n, x, y=0;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    int div[n];

    for (x=1; x<n; x++) {
        if (n%x == 0) {
            div[y] = x;
            y++;
        }
    }

    for (x=0; x<y; x++) {
        soma += div[x];
    }

    if (soma == n) {
        printf("O seu número é perfeito. ");
    } else {
        printf("O seu número não é perfeito. ");
    }


}
