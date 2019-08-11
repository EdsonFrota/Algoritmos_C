#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x,z,o;
    scanf("%d",&x);
    int M[x][x],N[x][x],S[x][x];
    for(z=0; z<x; ++z)
    {
        for(o=0; o<x; ++o)

        {
            scanf("%d",&M[z][o]);
        }
    }
    for(z=0; z<x; ++z)
    {
        for(o=0; o<x; ++o)
        {
            scanf("%d",&N[z][o]);
        }
    }
    for(z=0; z<x; ++z)
    {
        for(o=0; o<x; ++o)
        {
            S[z][o]=M[z][o]+N[z][o];
            printf("\nSOMA =  %d ",S[z][o]);
        }
    }

}
