#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main ()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");

    int edson;

    printf("====== Exibindo 10 números sorteados de 0 a 32767 =======\n\n");

    for (edson = 0; edson < 10; ++edson)
    {
        printf("%d ", rand() % 32767); /* Gerando Valores Aleatórios Entre 0 e 32767 */
    }

    getch();
    return 0;


    system("pause");
}
