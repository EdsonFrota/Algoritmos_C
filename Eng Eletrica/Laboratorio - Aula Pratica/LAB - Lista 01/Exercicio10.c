/*10. Faça um programa em C que receba dois números maiores que zero, calcule
e mostre um elevado ao outro.*/

#include<stdio.h>
int main ()
{
    int n1,n2,a,b;
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    a=pow(n1,n2);
    b=pow(n2,n1);
    printf("Resultado: %d %d\n",a, b);
    return 0;
}
