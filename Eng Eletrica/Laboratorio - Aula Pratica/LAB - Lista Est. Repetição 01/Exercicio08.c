/*8) Faça um programa que calcule e	escreva a seguinte soma:
 2¹/50 + 2²/49 + 2³/48 + ... + 2^50/1 */

#include<stdio.h>
#include<math.h>
int main ()
{
    int n1, soma=0,aux;
    for(n1=1; n1<=50; n1++)
    {
            aux = pow(2,n1);
            soma += aux/(50-n1+1);
    }
    printf("Soma: %d ",soma);
    return 0;
}

