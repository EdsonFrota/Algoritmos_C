#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, num, k, primo;

    for(n=1; n<=100; n++)
    {
        scanf("%d",&num);
        system ("cls");
        primo=0;
        for(k=1; k<=num; k++)
            if((num%k)==0)
                 primo++;
        if(primo>2)
            printf("%d nao e primo\n", num);

        else
            printf("%d e primo\n", num);
    }
}
