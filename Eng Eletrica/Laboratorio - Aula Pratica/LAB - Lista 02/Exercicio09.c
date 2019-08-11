/*9) Fa�a	um	programa que. Dados	tr�s	valores	X, Y e Z,	verifique se esses podem	ser
os comprimentos dos lados de um	 tri�ngulo.	 Se	 forem,	 verificar	 se	 �	 um
tri�ngulo	equil�tero,	is�sceles ou escaleno.	Se	eles n�o formarem um tri�ngulo
escrever	uma	mensagem. Considerar que:
a. O comprimento de cada lado de um tri�ngulo �	menor que a soma dos outros	dois lados;
b.Chama-se	tri�ngulo	equil�tero	o	tri�ngulo	que	tem	tr�s	lados	iguais;
c.Chama-se	tri�ngulo is�sceles	o tri�ngulo	que	tem	o comprimento de dois lados	iguais;
d.Chama-se	tri�ngulo escaleno o tri�ngulo que tem os tr�s	lados diferentes.	*/

#include<stdio.h>
int main ()
{
    float x, y, z;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &x);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &y);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &z);
    if (x <(y+z) && y <(x+z) && z <(x+y))
    {
        printf("E um triangulo");
    }
    else
    {
        if (x == y && y == z && z == x)
        {
            printf("Triangulo EQUILATERO.");
        }
        else
        {
            if (x==y && y==x)
            {
                printf("Triangulo ISOSCELES.");
            }
            else
            {
                if (x!=y && y!=z && x!=z)
                {
                    printf("Triangulo ESCALENO.");

                }
            }
        }
    }
    return (0);
}
