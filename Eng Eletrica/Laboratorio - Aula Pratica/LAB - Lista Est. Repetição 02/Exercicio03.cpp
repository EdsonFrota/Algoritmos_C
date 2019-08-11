/*3) Faça um programa que leia um número N e imprima N linhas na tela com o seguinte formato (
exemplo n=6):
+ * * * * *
* + * * * *
* * + * * *
* * * + * *
* * * * + *
* * * * * +   */
#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
