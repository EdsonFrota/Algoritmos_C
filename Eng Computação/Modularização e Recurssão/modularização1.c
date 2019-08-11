#include<stdio.h>
#include<stdlib.h>

void imprimir(float numero)
{
    printf("\tMF= %.2f\n", numero);
}
void media (float n1, float n2, float n3, float n4)
{
    float m;
    m=(n1+n2+n3+n4)/4;
    imprimir(m);
}
int main ()
{
    float n1, n2, n3, n4;
    printf("Digite n1: ");scanf("%f", &n1);
    printf("Digite n2: ");scanf("%f", &n2);
    printf("Digite n3: ");scanf("%f", &n3);
    printf("Digite n4: "); scanf("%f", &n4);
    media(n1, n2, n3, n4);
    getch();
}
