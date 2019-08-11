#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int n, x, y;
    int s = 1;
    float aux = 1;

    printf("N: ");
    scanf("%d", &n);

    for (x=1; x<=n; x++) {
        for (y=1; y<=x; y++) {
            aux = aux * y;
        }

        aux = 1/aux;
        s = s+aux;
        aux = 1;
    }

    printf("S = %d", s);


}
