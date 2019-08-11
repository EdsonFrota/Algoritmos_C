#include<stdio.h>
int main ()
{
    int n;
    float h;
    do
    {
        printf("n: ");
        scanf("%d", &n);
    }while(n<=0);
    while(n>=1){
        h = h + 1/n;
        n--;
    }
    printf("%f ",h);
    return 0;
}
