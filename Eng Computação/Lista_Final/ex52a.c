#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int a = -1, b = 0;
    float c, soma = 0;

    do {

        a = a+2;
        b++;

        c = (float)a/b;

        soma += c;

    } while(b<50);

    printf("O valor da primeira operação é: %f", soma);



}


