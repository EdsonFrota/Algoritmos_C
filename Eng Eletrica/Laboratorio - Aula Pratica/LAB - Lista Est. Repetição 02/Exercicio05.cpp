/*5) Fazer um programa que calcule e escreva o somatório da série abaixo com precisão menor que
um décimo de milionésimo (0,000001) e informe quantos termos foram utilizados: X^25/1 - X^24/2 + X^23/3 − X^22/4+...+X/25 */

#include<stdio.h>
#include<math.h>
int main ()
{
    int i, j,contador=1;
    float x, somatorio=0,aux;

    printf("Digite um numero: ");
    scanf("%f", &x);

    for(i=25; i>=1; i--)
    {
    }
    for(j=1; j<=1000000; j++)
    {
        aux = (pow(x,i))/j;
        if(contador%2==0)
        {
            somatorio-=aux;
        }
        else
        {
            somatorio+=aux;
        }
        contador++;
    }
    printf("\nO valor com precisao do somatorio e: %f\n",somatorio);
    return 0;
}

