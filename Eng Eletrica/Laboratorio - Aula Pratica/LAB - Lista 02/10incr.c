#include<stdio.h>

int main ()
{
    float altura, peso;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f",&peso);

    if (altura < 1.20)
    {
        if (peso <=60.0)
        {
            printf("GRUPO A.");
        }
        if (peso >= 60.0 && peso <= 90.0)
        {
            printf("GRUPO D.");
        }
        if (peso > 90.0)
        {
            printf("GRUPO G.");
        }

    }
    else
    {
        if(altura >= 1.20 && altura <= 1.70)
        {
            if (peso <= 60.0)
            {
                printf("GRUPO B.");
            }
            if (peso > 60.0 && peso <= 90.0)
            {
                printf("GRUPO E.");
            }
            if (peso > 90.0)
            {
                printf("GRUPO H.");
            }
        }
        else
        {
            if (altura > 1.70)
            {
                if (peso <= 60.0)
                {
                    printf("GRUPO C.");
                }
                if (peso > 60.0 && peso <= 90.0)
                {
                    printf("GRUPO F.");
                }
                if (peso > 90.0)
                {
                    printf("GRUPO I.");
                }
            }
        }
    }

    return (0);
}
