/*3. Escreva um algoritmo que receba um n�mero inteiro N, verifique se este � �mpar ou par e
imprima mensagem*/

#include<stdio.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "");
    int N;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &N);
    if (N%2!=0)
    {
        printf("O n�mero %d � IMPAR.",N);
    }
    else
    {
        printf("O n�mero %d � PAR.",N);
    }
    return 0;
}
