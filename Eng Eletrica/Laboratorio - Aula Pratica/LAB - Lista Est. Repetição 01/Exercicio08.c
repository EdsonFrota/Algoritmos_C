/*8) Fa�a um programa que calcule e	escreva a seguinte soma:
 2�/50 + 2�/49 + 2�/48 + ... + 2^50/1 */

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

