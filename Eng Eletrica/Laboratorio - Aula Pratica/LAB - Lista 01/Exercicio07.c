/*7. Fa�a um programa em C que calcule e mostre a �rea de um tri�ngulo. Sabe-se
que: �rea = (base*altura)/2.*/

#include<stdio.h>
int main ()
{
    float base,altura,area;
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    area=(base*altura)/2;
    printf("A area do triangulo e: %f",area);
    return 0;
}
