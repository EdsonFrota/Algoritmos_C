#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int a, e = 0, b = 50;
    float c, soma = 0;

    do {

        e++;
        b--;

        a = pow(2, e);

        c = (float)a/b;

        soma += c;

    } while(b>1);

    printf("O valor da segunda operação é: %f", soma);



}


