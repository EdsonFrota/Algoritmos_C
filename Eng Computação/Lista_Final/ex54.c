#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, b, e, p=1;

    printf("Informe a base: ");
    scanf("%d", &b);

    printf("Informe o expoente: ");
    scanf("%d", &e);

    for (x=1; x<=e; x++) {
        p *= b;
    }

    printf("O resultado é: %d",p);


}


