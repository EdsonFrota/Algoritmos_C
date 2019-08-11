#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

float fatorial (int z) {

    int x, fat=1;

    for (x=1; x<=z; x++) {
        fat *= x;
    }

    return fat;


}

main() {

    setlocale(LC_ALL, "");

    int x, n, num;
    float grau, rad;
    int z = 1;
    int sinal = -1;
    float a, b, c;
    float seno = 0;

    printf("Informe um valor inteiro e impar: ");
    scanf("%d", &num);

    if ((num < 0) || (num%2 == 0)) {
        printf("Número informado incorreto. ");
    }

    else {

        printf("Informe o valor do ângulo em graus: ");
        scanf("%f", &grau);

        rad = (3.14 * grau) / (float)180;

        printf("\nO valor de %.2f graus equivale a %.2f radianos. \n", grau, rad);

        n = num/2 + 1;

        for (x=0; x<n; x++) {

            sinal = sinal * -1;

            a = pow(rad, z);
            b = fatorial(z);
            c = a/b * sinal;

            seno += c;

            z = z+2;

        }

        printf("O valor do seno deste ângulo é: %f", seno);







    }


}


