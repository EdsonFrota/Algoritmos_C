#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x, n;
    int fatorial = 1;

    printf("Numero: ");
    scanf("%d", &n);

    //Solução 1:
    for (x=1; x<=n; x++) {
        fatorial = fatorial*x;
    }

    printf("\nFatorial = %d", fatorial);


    //Solução 2:
    fatorial = 1;
    x = 1;
    do {
        fatorial = fatorial * x;
        x++;
    } while(x<=n);

    printf("\nFatorial = %d", fatorial);


    //Solução 3:
    fatorial = 1;
    x = 1;
    while(x<=n) {
        fatorial = fatorial * x;
        x++;
    }
    printf("\nFatorial = %d", fatorial);
}
