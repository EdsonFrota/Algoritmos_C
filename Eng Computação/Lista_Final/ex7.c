#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x, n, a;

    n = 1 + rand() % 10;

    printf("Adivinhe: ");
    scanf("%d", &a);

    if (a == n) {
        for (x=0; x<100; x++) {
            printf("Que sorte! \n");
        }
    } else {
        printf("Errado, o número sorteado foi %d! \n", n);
    }


}
