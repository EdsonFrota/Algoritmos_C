/*5) Fa�a um mprograma que receba mum n�mero inteiro e verifique se esse n�mero	�
par	ou	�mpar.	*/

#include<stdio.h>
int main ()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if(numero%2==0)
    {
        printf("Numero PAR.");
    }
    else
    {
        printf("Numero IMPAR.");
    }
    return (0);
}
