#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main ()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");

    int edson, junior;

    printf(" Digite um número: ");
    scanf("%d", &edson);

    printf("\nDigite a faixa de sorteio: ");
    scanf("%d", &junior);

    printf("\n\n\Os números são:\n");

    for (edson = 1; edson <= junior; ++edson)
    {
        printf("%d ", rand() % junior); /* Gerando Valores Aleatórios Entre 0 e 32767 */
    }

    getch();
    return 0;

    system("pause");
}
