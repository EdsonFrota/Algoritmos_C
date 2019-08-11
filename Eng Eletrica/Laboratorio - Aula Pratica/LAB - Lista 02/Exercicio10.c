/*10) Faça	um	programa	que	receba	a	altura	e	o	peso	de	uma	pessoa.	De	acordo	com	a
tabela	a	seguir	verifique	e	mostre	qual	a	classificação	dessa	pessoa.
ALTURA          |PESO
ATÉ 60 | ENTRE 60	E 90 | ACIMA DE 90
Menores	que	1,20 | A | D | G |
De 1,20 a 1,70   | B | E | H |
Maiores de 1,70  | C | F | I | */

#include<stdio.h>

int main ()
{
    float altura, peso;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f",&peso);

    if (altura < 1.20 && peso <=60.0)
    {
        printf("GRUPO A.");
    }
    else
    {
        if (altura < 1.20 && peso >=60.0 && peso <= 90.0)
        {
            printf("GRUPO D.");
        }
        else
        {
            if (altura < 1.20 && peso > 90.0)
            {
                printf("GRUPO G.");
            }
            else
            {
                if (altura >= 1.20 && altura <= 1.70 && peso <=60.0)
                {
                    printf("GRUPO B.");
                }
                else
                {
                    if (altura >= 1.20 && altura <= 1.70 && peso >= 60.0 && peso <=90.0)
                    {
                        printf("GRUPO E.");
                    }
                    else
                    {
                        if (altura >= 1.20 && altura <=1.70 && peso > 90.0)
                        {
                            printf("GRUPO H.");
                        }
                        else
                        {
                            if (altura > 1.70 && peso <= 60.0)
                            {
                                printf("GRUPO C.");
                            }
                            else
                            {
                                if (altura > 1.70 && peso >= 60.0 && peso <= 90.0)
                                {
                                    printf("GRUPO F.");
                                }
                                else
                                {
                                    if (altura > 1.70 && peso > 90.0)
                                    {
                                        printf("GRUPO I.");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (0);
}
