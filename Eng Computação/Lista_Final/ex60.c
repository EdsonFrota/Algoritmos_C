#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    float chicoAlt = 150;
    float zeAlt = 110;

    int ano = 0;

    do {

        ano++;

        chicoAlt += 2;
        zeAlt += 3;

    } while(zeAlt <= chicoAlt);

    printf("Após %d anos, Zé tem %.2f metros, enquanto que Chico tem %.2f metros. ", ano, zeAlt/100, chicoAlt/100);



}


