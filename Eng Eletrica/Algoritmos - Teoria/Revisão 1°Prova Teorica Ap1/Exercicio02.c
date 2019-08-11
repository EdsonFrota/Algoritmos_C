/*2. Crie um programa para informar quais e quantas notas s˜ao necess´arias para entregar o
m´ınimo de c´edulas para um determinado valor informado pelo usu´ario, considerando notas
de R$100, R$50, R$20, R$10, R$5, R$2, e moedas de R$1. Seu programa deve mostrar
apenas as notas utilizadas. Por exemplo, ao solicitar R$18, o programa deve informar
apenas a seguinte informa¸c˜ao (note que n˜ao foram exibidas informa¸c˜oes sobre as demais
c´edulas):
1 nota(s) de R$10.
1 nota(s) de R$5.
1 nota(s) de R$2.
1 moeda(s) de R$1*/
#include<stdio.h>
int main ()
{
    int nota, n100, n50, n20,n10, n5, n2, resto;
    printf("Digite o valor desejado: ");
    scanf("%d", &nota);

    n100=nota/100;
    resto=nota%100;
    if (n100!= 0)
        printf("\n\t%d nota de 100", n100);


    n50=resto/50;
    resto=resto%50;
    if (n50!=0)
        printf("\n\t%d nota de 50.", n50);



    n20=resto/20;
    resto=resto%20;
    if (n20!=0)
        printf("\n\t%d nota de 20.", n20);

    n10=resto/10;
    resto=resto%10;
    if (n10!=0)
        printf("\n\t%d nota 10.", n10);


    n5=resto/5;
    resto=resto%5;
    if (n5!=0)
        printf("\n\t%d nota de 5.", n5);


    n2=resto/2;
    resto=resto%2;
    if (n2!=0)
        printf("\n\t%d nota de 2.", n2);

    if (resto!=0)
        printf("\n\t%d moedas de 1.\n", resto);
    printf("\n") ;
    return (0);
}
