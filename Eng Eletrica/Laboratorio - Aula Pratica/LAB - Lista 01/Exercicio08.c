/*8. Fa�a um programa em C que calcule e mostre a �rea de um c�rculo. Sabendo
que: �rea do circulo =  3.14*R�*/

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
