#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int idade, maior,l;
    char sexo, olho, cabelo;

    maior =0;
    l =0;

    do
    {

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0)
        {
            printf("NÃO ENTRA NA PESQUISA\n");
        }

        else
        {

            printf("Sexo: ");
            scanf(" %c", &sexo);

            printf("Cor dos olhos: ");
            scanf(" %c", &olho);

            printf("Cor dos cabelos: ");
            scanf(" %c", &cabelo);


            if (idade > maior)
            {
                maior = idade;
            }

            if (sexo == 'f')
            {
                if ((idade >= 18) && (idade <= 35))
                {
                    if ((olho == 'v') && (cabelo == 'l'))
                    {
                        ++l;
                    }
                }
            }

        }

    }
    while (idade != -1);

    printf("\nA maior idade é: %d", maior);
    printf("%d", l);

    getch();
    return 0;

    system("pause");
}

