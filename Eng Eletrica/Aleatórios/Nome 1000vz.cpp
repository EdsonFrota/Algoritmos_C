#include<stdio.h>
int main ()
{
    char nome[50];
    int i=1;

    printf("Digite o nome: ");
    gets(nome);

    do
    {
        printf("\n[%d] .%s",i, nome);
        i++;
    }
    while(i<=1000);
    return 0;
}
