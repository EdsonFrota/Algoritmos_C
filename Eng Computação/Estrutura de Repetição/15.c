#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int z, r,g;
    srand(time(NULL));
    z = 1 + (rand() % 100);

    printf("\t ### JOGO ADIVINHE O N�MERO ###! \n\n");

    for(g= 1; g > 0; ++g)
    {
        printf("Digite o n�mero: ");
        scanf("%d", &r);

        if(r > z)
            printf("O n�mero informado � maior!\nTente novamente.\n\n");
        else if(r < z)
            printf("O n�mero informado � menor!\nTente novamente.\n\n");
        else
        {
            printf("Parab�ns voc� acertou em %d tentativas!", g);
            g = -1;
        }
    }
    getch();
    return 0;

    system("pause");
}
