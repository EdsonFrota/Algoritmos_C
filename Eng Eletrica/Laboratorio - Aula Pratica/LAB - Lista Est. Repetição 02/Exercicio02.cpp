/*2) Fa�a um programa que leia um n�mero n e imprima n linhas na tela com o seguinte formato
(exemplo n=6):
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6*/
#include<stdio.h>
int main ()
{
    int i,j, n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}

