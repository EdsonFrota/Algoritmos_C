/*4) Um jogador da Mega-Sena � supersticioso, e s� faz jogos em que o primeiro n�mero do jogo �
par, o segundo � �mpar, o terceiro � par, o quarto � �mpar, o quinto � par e o sexto � �mpar. Fa�a
um programa que imprima todas as possibilidades de jogos que este jogador supersticioso pode
jogar. */
#include<stdio.h>
int main ()
{
    int i, par=0, impar=0,j;
    for(i=1; i<=60; i++)  //possibilidades de numeros 0 a 60
    {
        if(i%2==0)
        {
            par = i;     // numeros pares
        }
        else
        {
            impar = i;     // numeros impares
        }
         // printf("\n%d %d %d %d %d %d",par,impar,par,impar,par,impar);
    }

    for(j=1; j<=6 ; j++)      // aposta consiste em 6 numeros
    {
        for(par=2; par<=60; par+=2)
        {
            for(impar=1; impar<=59; impar+=2)
            {
                printf("\n%d %d %d %d %d %d",par,impar,par,impar,par,impar);
            }
        }
         printf("\n%d %d %d %d %d %d",par,impar,par,impar,par,impar);
    }
    return 0;
}
