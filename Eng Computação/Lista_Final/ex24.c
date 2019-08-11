#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int x, n,n1, n2, n3, soma;

    n1 = 1;
    n2 = 1;

    printf("Digite o termo: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("\n1. %d");
    } else {

        printf("\n1. %d", 1+1+2);

        for (x=2; x<=n; x++) {
            soma = n1+n2;
            n3 = n1+n2+soma;

            n1 = n2;
            n2 = soma;

            printf("\n%d. %li", x, n3);
        }
    }
    getch();
        return 0;
        system("pause");

}
