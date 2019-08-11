#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, h, i;
    char s;
    float sal, somaSal = 0, mediaSal;
    int maiorI = 0, menorI = 999;
    int mulher100rs = 0;

    printf("Habitantes: ");
    scanf("%d", &h);

    for (x=0; x<h; x++) {

        printf("s: ");
        scanf(" %c", &s);

        printf("idade: ");
        scanf("%d", &i);

        printf("salario: ");
        scanf("%f", &sal);

        somaSal += sal;
        mediaSal = somaSal/(float)h;

        if (i > maiorI) {
            maiorI = i;
        }

        if (i < menorI) {
            menorI = i;
        }

        if (s == 'f') {
            if (sal <= 100) {
                mulher100rs++;
            }
        }
    }

    printf("\nMédia salário grupo: %f", mediaSal);
    printf("\nMaior idade: &d, Menor idade: %d", maiorI, menorI);
    printf("\nMulheres salário até 100R$: %d", mulher100rs);



}

