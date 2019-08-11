/*a) Desenvolva a função (sub-rotina) "imprimeImpares",	que	recebe dois números inteiros, e	escreve	todos os números ímpares entre eles
(incluindo-os, caso também sejam ímpares). Observe que os números não necessariamente estarão em ordem crescente, ou seja, seu algorítmo
deve verificar	isso.	*/

#include<stdio.h>
void imprimeImpares(int num1, int num2)
{
    for(num1 = num1; num1<=num2; num1++)
    {
        if(num1%2!=0)
        {
            printf(" %d ", num1);
            num1++;
        }
    }
    printf("\n");
}

int main ()
{
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d",&num2);

    if(num1 >= num2)
    {
        printf("\nInforme os numeros em ordem crescente.\n");
    }
    else
    {
        printf("\nNumeros impares entre %d e %d:\n",num1,num2);
        imprimeImpares(num1,num2);
    }
    return 0;
}

