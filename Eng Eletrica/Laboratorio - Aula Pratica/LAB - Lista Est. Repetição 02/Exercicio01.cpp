/*1) Faça um programa que leia um inteiro n (no máximo 50) e imprima uma saída da forma:
1
 2
  3
 .
 .
 .
        n*/
#include<stdio.h>
int main ()
{
    int i, j, n;

    printf("Digite um numero inteiro(no max. ate 50): ");
    scanf("%d", &n);

    if(n > 50)
    {
        printf("O numero digitado deve ser menor ou igual a 50.");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            printf(" %d\n", i);

            for(j=1; j<=i; j++)
            {
                printf(" ");
            }
        }
    }
    return 0;
}
