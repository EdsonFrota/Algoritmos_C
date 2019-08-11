#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {

    setlocale(LC_ALL, "");
    int num=0, x=0, y, z;
    int vetor[20];

    do {

    system("cls");
    printf("\n\t##########################################");
    printf("\n\t##\t\tABACO DO NOLETO\t\t##");
    printf("\n\t##########################################");

    printf("\n\n\tNúmero informado: %d", num);
    printf("\n\n");

    do {
        if (num>10) {
            vetor[x] = num%10;
            num = num/10;
            x++; }
    } while(num>10);
    vetor[x] = num;

    for (y=0; y<=x; y++) {
            //printf("[%d]. ", y+1);
            printf("\t");
        for (z=0; z<vetor[y]; z++) {
            printf("x ");
        }
        printf("\n");

    }

    printf("\n\nInforme um número: ");
    scanf("%d", &num);
    printf("\n");



    } while (num!=99999);

    }
