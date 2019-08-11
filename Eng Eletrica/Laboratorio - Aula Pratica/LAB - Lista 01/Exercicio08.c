/*8. Faça um programa em C que calcule e mostre a área de um círculo. Sabendo
que: área do circulo =  3.14*R²*/

#include<stdio.h>
int main ()
{
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area=3.14*(raio*raio);
    printf("A area do circulo e: %.1f",area);
    return 0;
}
