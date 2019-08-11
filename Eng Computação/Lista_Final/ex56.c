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

    int x, n, z = 1;
    float v;
    float a, b, c;
    float resultado = 0;

    printf("Informe um número de termos: ");
    scanf("%d", &n);

    printf("Informe o valor da variável: ");
    scanf("%f", &v);

    for (x=1; x<n; x++) {

        a = pow(v, z);
        b = fatorial(z);

        c = a/b;

        resultado += c;

        z++;

    }

    resultado += 1;
    printf("\nO valor do número de euler elevado a %.1f é: %.3f", v, resultado);


}


