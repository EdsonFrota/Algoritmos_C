#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

float fatorial (int z)
{

    int x, fat=1;

    for (x=1; x<=z; x++)
    {
        fat *= x;
    }

    return fat;


}

int main()
{

    setlocale(LC_ALL, "");

    int x, n, num;
    float grau, rad;
    int z = 1;
    int sinal = -1;
    float a, b, c;
    float seno = 0;

    printf("DIigite um número e impar: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Informe um númnero maior que 0. ");
    }
    if (num %2 ==0)
        printf("Informe um número ímpar, pois %d é par.", num);
    else
    {

        printf("Ângulo em graus: ");
        scanf("%f", &grau);

        rad = (3.14 * grau) / (float)180;

        printf("\nO valor de %.2f graus equivale a %.2f radianos. \n", grau, rad);

        n = num/2 + 1;

        for (x=0; x<n; x++)
        {

            sinal = sinal * -1;

            a = pow(rad, z);
            b = fatorial(z);
            c = a/b * sinal;

            seno += c;

            z = 2+z;

        }

        printf("O Seno deste Ângulo é: %f", seno);

    }

    getch();
    return 0;


    system("pause");
}


