/*12. Um fabricante de latas deseja desenvolver um programa em C para calcular o
custo de uma lata cil�ndrica de alum�nio. Sabendo-se que o custo do alum�nio
por m� � de R$ 100,00. �rea da lata = �rea da base(PI * r� + 2)+
�rea do lado(2* PI * r * h).*/

#include<stdio.h>
#define PI 3.1415
int main ()
{
    float raio, base, altura, lado, area;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    base=(PI*(raio*raio)+2);
    lado=(2*PI*raio*altura);
    area=(base+lado)+100;
    printf("O custo da lata cilindrica sera de R$ %.2f",area);
    return 0;
}

