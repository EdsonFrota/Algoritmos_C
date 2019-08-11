/*No primeiro quadrante, os pontos possuem abcissa e ordenada positiva;
Enquanto que no segundo, todos os pontos possuem abcissa negativa e ordenada positiva;
No terceiro quadrante, os pontos possuem abcissa e ordenada negativa.
Já no quarto, os pontos possuem abcissa positiva e ordenada negativa.*/

#include<stdio.h>
int main ()
{
    int x,y;                        //x =[abcissa] y =[ordenada]
    printf("Digite abcissa[x]: ");
    scanf("%d", &x);
    printf("Digite ordenada[y]: ");
    scanf("%d", &y);
    if (x>0 && y>0)
    {
        printf("1a quadrante.");
    }
    else if (x<0 && y>0)
    {
        printf("2a quadrante.");
    }
    else if(x<0 && y<0)
    {
        printf("3a quadrante.");
    }
    else if (x>0 && y<0)
    {
        printf("4° quadrante.");
    }
    else if(x==0 && y==0)
    {
        printf("O ponto esta na origem.");
    }
    else if(x==0 && y>0 || y<0)
    {
        printf("Esta sobre o eixo y.");
    }
    else if (y==0 && x>0 || x<0)
    {
        printf("Está sobre o eixo x.");
    }
    return 0;
}






