#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "");

    int dia, mes, ano;
    int a, x;

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Mês: ");
    scanf("%d", &mes);

    printf("Ano: ");
    scanf("%d", &ano);

    printf("Informe a quantidade de dias a ser adicionada: ");
    scanf("%d", &a);

    printf("\n\nData informada: %2d / %2d / %d", dia, mes, ano);

    for (x=0; x<a; ++x)
    {

        dia++;

        if (dia > 30)
        {
            dia = 1;
            mes++;

            if (mes > 12)
            {
                mes = 1;
                ++ano;
            }
        }

    }

    printf("\n\nData atualizada: %2d / %2d / %d\n\n", dia, mes, ano);

    getch();
    return 0;


    system("pause");
}
