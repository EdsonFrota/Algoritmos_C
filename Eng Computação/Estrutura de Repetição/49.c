#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>


int main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int a, n, qtde;
    int aux, sorte;

    sorte =0;
    printf("Informe um n�mero de 1 a 100: ");
    scanf("%d", &n);

    printf("\nQuantidade de sorteios: ");
    scanf("%d", &qtde);

    for (a=0; a<qtde; ++a) {
        aux = rand()%100 + 1;

        if (aux == n) {
            ++sorte;
        }
    }

    printf("\n\tN�mero sorteado %d vezes.\n", sorte);

    getch();
    return 0;


    system("pause");
}


