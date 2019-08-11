#include<stdio.h>
int main ()
{
    float n1, n2, n3, n4;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite e o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    printf("Digite o quarto numero: ");
    scanf("%f", &n4);

    if (n4 >= n3)
    {
        printf("%.1f %.1f %.1f %.1f", n4,n3,n2,n1);
    }
    else if  (n4 >= n1)
    {
        printf("%.1f %.1f %.1f %.1f",n3,n2,n4,n1);
    }
    else if (n4 <= n1)
    {
        printf("%.1f %.1f %.1f %.1f",n3,n2,n1,n4);
    }
    return (0);
}
