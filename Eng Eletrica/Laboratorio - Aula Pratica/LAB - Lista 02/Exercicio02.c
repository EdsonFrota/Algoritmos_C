/*2) Faça um PROGRAMA que receba dois números e	mostre o maior.	*/

#include<stdio.h>
int main ()
{
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    if (n1 > n2)
    {
        printf("\nO numero %.2f e maior.\n", n1);
    }
    else
    {
        if (n1 == n2)
        {
            printf("\nOs numeros sao iguais.\n");
        }
        else
        {
            if (n1 < n2)
            {
                printf("\nO numero %.2f e maior.\n",n2);
            }
        }

    }
    return (0);
}

