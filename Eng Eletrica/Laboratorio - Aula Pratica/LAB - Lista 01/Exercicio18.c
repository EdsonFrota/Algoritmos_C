/*18. Dada a base e a altura de uma pirâmide. Calcule e escreva o volume desta.
(V=(1/3)*B*H).*/

#include<stdio.h>
int main ()
{
    float altura, base, volume;
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    volume= (1/3.0)*base*altura;
    printf("O volume da piramide e: %f", volume);
    return 0;
}
