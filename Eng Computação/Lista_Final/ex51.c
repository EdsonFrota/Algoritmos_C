#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    float pi = 3.1415926535;
    float a, r;
    char c;

    do {

        system("cls");

        printf("Informe o valor do raio: ");
        scanf("%f", &r);

        a = pi * pow(r,2);

        printf("A �rea desse c�rculo �: %.2f. \n\n", a);

        printf("Deseja calcular mais �reas? Sim (S) | N�o (N): ");
        scanf(" %c", &c);



    } while (c != 'N');



}


