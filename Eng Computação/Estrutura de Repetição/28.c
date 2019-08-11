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

        printf("Número: ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Informe um número positivo. ");
        }
        else
        {

            if (n%2 == 0)
            {
                ++par;
                par1 = (float)par/++par;
                printf("\nVocê já digitou %d números pares. \n", par);
                printf("\nMédia de números pares  é = %.1f\n", par1, par);
            }
            else if (n%2 != 0)
            {
                ++impar;
                impar1 = (float)impar/++impar;
                printf("\n%d números impares informados. \n", impar);
                printf("\nMédia de números impares é = %.1f.\n", impar1, impar);
            }

        }


        ++oo;


    }
    while (n != 0);

    getch();
    return 0;
    system("pause");

}
