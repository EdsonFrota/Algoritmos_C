#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x, a, b;

    printf("Inicio: ");
    scanf("%d", &a);

    printf("Fim: ");
    scanf("%d", &b);

    for (x=a; x<=b; x++) {
        if (x%2!=0) {
            printf("%d ", x);
        }
    }

}
