#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main () {

    setlocale(LC_ALL, "");

    int n, x, qt=0;
    printf("Digite um n�mero: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {
        if (n%x == 0) {
            qt++;
        }
    }

    if (qt <=2) {
        printf("O seu n�mero � primo. ");
    } else {
        printf("O seu n�mero n�o � primo. ");
    }

}
