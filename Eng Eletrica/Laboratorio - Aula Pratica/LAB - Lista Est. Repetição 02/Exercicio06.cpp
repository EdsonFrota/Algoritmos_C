/*6) Fazer um programa que leia o valor de X e escreva o valor do somatório:
X^25/1 - X^24/2 + X^23/3 − X^22/4+...+X/25 */

#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j,contador=1;
    float x, somatorio=0, aux;

    printf("Digite um numero: ");
    scanf("%f", &x);

    for(i=25; i>=1; i--)
    {
    }
    for(j=1; j<=25; j++)
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
    printf("\nO valor do somatorio e: %f\n", somatorio);
    return 0;
}
