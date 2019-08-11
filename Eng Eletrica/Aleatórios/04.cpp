#include<stdio.h>
int main ()
{
    int i, par1,par3, par5, impar2, impar4, impar6,j,auxI=0, auxP=0;
    for(i=1; i<=60; i++)  //possibilidades de numeros 0 a 60
    {
        if(i%2==0)
        {
            par1 = i;     // numeros pares
        }
        else
        {
            impar2 = i;     // numeros impares
        }
    }
    for(i=1; i<=60; i++)  //possibilidades de numeros 0 a 60
    {
        if(i%2==0)
        {
            par3 = i;     // numeros pares
        }
        else
        {
            impar4 = i;     // numeros impares
        }
    }
    for(i=1; i<=60; i++)  //possibilidades de numeros 0 a 60
    {
        if(i%2==0)
        {
            par5 = i;     // numeros pares
        }
        else
        {
            impar6 = i;     // numeros impares
        }
    }

    for(j=1; j<=6 ; j++)      // aposta consiste em 6 numeros
    {
        printf("\n%d %d %d %d %d %d",par1,impar2,par3,impar4,par5,impar6);
    }
    return 0;
}
