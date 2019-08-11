#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    float sal, maiorSal,somaSal , somaF, mediaSal, mediaF, t;
    int f, q, w;

    q = 0;
    maiorSal = 0;
    w = 0;
    somaSal = 0;
    somaF = 0;

    do
    {

        printf("Informe seu salário: ");
        scanf("%f", &sal);

        if (sal < 0)
        {
            printf("Saindo da leitura. ");
        }

        else
        {

            printf("Informe o número de filhos: ");
            scanf("%d", &f);

            printf("\n");

            ++q;

            somaSal += sal;
            mediaSal = somaSal/q;

            somaF += f;
            mediaF = somaF/q;

            if (sal > maiorSal)
            {
                maiorSal = sal;
            }

            if (sal <= 100)
            {
                ++w;
            }

            t = (float)w/q;

        }

    }
    while(sal > 0);

    printf("\n\t#CÁLCULO#S\n");

    printf("\n\tMédia salarial População: %.2f", mediaSal);
    printf("\n\tMédia Filhos: %.2f", mediaF);
    printf("\n\tMaior salário: %.2f", maiorSal);
    printf("\n\tPercentual de pessoas com salário até R$100,00 é %.2f", t);

    getch();
    return 0;


    system("pause");

}


