#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, n;

    printf("Informe qual tabuada deseja ler: ");
    scanf("%d", &n);

    for (x=1; x<=10; x++) {

        printf("%d x %d = %d \n", n, x, n*x);

    }

}
