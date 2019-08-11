/*3. Escreva um algoritmo que receba um número inteiro N, verifique se este é ímpar ou par e
imprima mensagem*/

#include<stdio.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "");
    int N;
    printf("Digite um número inteiro: ");
    scanf("%d", &N);
    if (N%2!=0)
    {
        printf("O número %d é IMPAR.",N);
    }
    else
    {
        printf("O número %d é PAR.",N);
    }
    return 0;
}
