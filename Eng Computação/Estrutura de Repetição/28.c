#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int n, par=0, impar=0, oo;
    float par1, impar1;


    do
    {

        printf("N�mero: ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Informe um n�mero positivo. ");
        }
        else
        {

            if (n%2 == 0)
            {
                ++par;
                par1 = (float)par/++par;
                printf("\nVoc� j� digitou %d n�meros pares. \n", par);
                printf("\nM�dia de n�meros pares  � = %.1f\n", par1, par);
            }
            else if (n%2 != 0)
            {
                ++impar;
                impar1 = (float)impar/++impar;
                printf("\n%d n�meros impares informados. \n", impar);
                printf("\nM�dia de n�meros impares � = %.1f.\n", impar1, impar);
            }

        }


        ++oo;


    }
    while (n != 0);

    getch();
    return 0;
    system("pause");

}
