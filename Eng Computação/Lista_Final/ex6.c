#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x, n, start, end;

    printf("Quantidade: ");
    scanf("%d", &n);

    printf("Inicio: ");
    scanf("%d", &start);

    printf("Fim: ");
    scanf("%d", &end);

    for (x=0; x<n; x++) {
        printf("%d ", (start + rand()% (end - start)));
    }



}
