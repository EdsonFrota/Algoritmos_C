#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main ()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");

    int edson;

    printf("====== Exibindo 50 números sorteados de 0 a 99 =======\n\n");

    for (edson = 0; edson < 50; ++edson)
    {
        printf("%d ", rand() % 99); /* Gerando Valores Aleatórios Entre 0 e 99 */
    }

    getch();
    return 0;



    system("pause");
}
