#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    float sal, maiorSal = 0;
    int f, qtd = 0, somaSal100 = 0;
    float somaSal = 0, somaF = 0, mediaSal, mediaF, mediaSal100;

    do {

        printf("Informe seu salario: ");
        scanf("%f", &sal);

        if (sal < 0) {
            printf("Saindo da leitura. ");
        }

        else {

            printf("Informe o número de filhos: ");
            scanf("%d", &f);

            printf("\n");

            qtd++;

            somaSal += sal;
            mediaSal = somaSal/qtd;

            somaF += f;
            mediaF = somaF/qtd;

            if (sal > maiorSal) {
                maiorSal = sal; }

            if (sal <= 100) {
                somaSal100++; }

            mediaSal100 = (float)somaSal100/qtd;

        }

    } while(sal > 0);

    printf("\n\n");
    printf("\nMédia do salário da população: %.2f", mediaSal);
    printf("\nMédia do número de filhos: %.2f", mediaF);
    printf("\nMaior salário: %.2f", maiorSal);
    printf("\nPercentual de pessoas com salário até R$100: %.2f", mediaSal100);



}


