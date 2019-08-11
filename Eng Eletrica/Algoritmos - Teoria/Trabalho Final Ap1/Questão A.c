/*a) Desenvolva a fun��o (sub-rotina) "imprimeImpares",	que	recebe dois n�meros inteiros, e	escreve	todos os n�meros �mpares entre eles
(incluindo-os, caso tamb�m sejam �mpares). Observe que os n�meros n�o necessariamente estar�o em ordem crescente, ou seja, seu algor�tmo
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

