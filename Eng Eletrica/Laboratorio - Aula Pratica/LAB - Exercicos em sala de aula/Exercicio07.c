//7	- Dada a base e	a altura de	uma	pirâmide. Desenvolva um	programa
//Calcule e escreva	o volume desta.	(V=(1/3)*B*H).

#include<stdio.h>
int main()
{
    float base, altura, v;
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    v = (1/3.0)*base*altura;
    printf("O volume da piramide e: %.2f ", v);
    return 0;
}
