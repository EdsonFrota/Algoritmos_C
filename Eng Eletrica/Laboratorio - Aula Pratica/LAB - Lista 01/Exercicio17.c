/*17. Dado um número de 3 algarismos, construir outro número de quatro algarismos
de acordo com a seguinte regra:
• Os três primeiros algarismos, contados da esquerda para direita são
iguais aos do número dado;
• O quarto algarismo é um dígito de controle calculado da seguinte
forma: primeiro algarismo + (segundo algarismo * 3) + (terceiro
algarismo * 5). O dígito de controle é igual ao resto da divisão dessa
soma por 7.*/

#include<stdio.h>
int main ()
{
    int numero1, numero2, uni,dez, cent;
    printf("Digite um numero de 3 algarismos: ");
    scanf("%d", &numero1);
    uni=numero1%10;
    dez=(numero1%100)/10;
    cent=(numero1/100)%10;
    numero2=(uni+(dez*3)+(cent*5))%7;
    printf("\n%d\n",uni);
    printf("%d\n",dez);
    printf("%d\n",cent);
    printf("O digito de controle e: %d. O novo numero e: %d%d%d%d\n",numero2, cent, dez, uni, numero2);
    return 0;
}
