#include<stdio.h>
#include<time.h>

int main ()
{
    srand(time(NULL));
    int z;
    for(z=0; z<=5; ++z)
    {

        printf(" \n%d",rand()%10);
    }
    return (0);
}
