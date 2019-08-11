/*5) Faça um mprograma que receba mum número inteiro e verifique se esse número	é
par	ou	ímpar.	*/

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
