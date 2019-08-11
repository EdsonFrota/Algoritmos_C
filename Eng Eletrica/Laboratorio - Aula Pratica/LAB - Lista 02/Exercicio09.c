/*9) Faça	um	programa que. Dados	três	valores	X, Y e Z,	verifique se esses podem	ser
os comprimentos dos lados de um	 triângulo.	 Se	 forem,	 verificar	 se	 é	 um
triângulo	equilátero,	isósceles ou escaleno.	Se	eles não formarem um triângulo
escrever	uma	mensagem. Considerar que:
a. O comprimento de cada lado de um triângulo é	menor que a soma dos outros	dois lados;
b.Chama-se	triângulo	equilátero	o	triângulo	que	tem	três	lados	iguais;
c.Chama-se	triângulo isósceles	o triângulo	que	tem	o comprimento de dois lados	iguais;
d.Chama-se	triângulo escaleno o triângulo que tem os três	lados diferentes.	*/

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
