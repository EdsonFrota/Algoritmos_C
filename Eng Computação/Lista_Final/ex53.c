#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, n, p=1;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {
        printf("%d ", x);
    }

    for (x=1; x<=n; x++) {
        p *= x;
    }

    printf("\nO produto de todos os n�meros lidos � %d. ", p);



}


