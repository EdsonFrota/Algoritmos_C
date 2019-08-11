/*4) Um jogador da Mega-Sena é supersticioso, e só faz jogos em que o primeiro número do jogo é
par, o segundo é ímpar, o terceiro é par, o quarto é ímpar, o quinto é par e o sexto é ímpar. Faça
um programa que imprima todas as possibilidades de jogos que este jogador supersticioso pode
jogar. */
#include<stdio.h>
int main ()
{
    int par1,par3,par5,impar2,impar4,impar6, x=0;

    printf("As Possibilidades sao: ");

    for(par1=0; par1<=55; par1+=2)
    {
        for(impar2=par1+1; impar2<=56; impar2+=2)
        {
            for(par3=impar2+1; par3<=57; par3+=2)
            {
                for(impar4=par3+1; impar4<=58; impar4+=2)
                {
                    for(par5=impar4+1; par5<=59; par5+=2)
                    {
                        for(impar6=par5+1; impar6<=60; impar6+=2)
                        {    x++;
                            printf("\n [%d§] : |%d  %d  %d  %d  %d  %d| ",x,par1,impar2,par3,impar4,par5,impar6);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
