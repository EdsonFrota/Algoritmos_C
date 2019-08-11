#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {

    setlocale(LC_ALL, "");

    int x, y, c, op;
    int xa[100], ya[100];
    int l=0, xc=0, yc=0;
    char letter[100];

    xa[0]=0;
    ya[0]=0;

    char draw[10][10];

    //ATRIBUI VALORES INICIAIS DE CADA (X,Y)
    for (x=0; x<10; x++) {
        for (y=0; y<10; y++) {
            draw[x][y] = '.';
        }
    }

    do {

    system("cls");
    printf("\t###############################################\n");
    printf("\t#######\t\tPONTO NO GRÁFICO\t#######\n");
    printf("\t###############################################\n");
    printf("\n");

    //MOSTRA O GRÁFICO
    for (y=9; y>=0; y--) {
            printf("\n");
        for (x=0; x<10; x++) {
                if ((x+1 == xa[xc-1]) && (y+1 == ya[yc-1])) {
                    draw[x][y] = letter[l-1];
                }
            printf("%c\t", draw[x][y]);
        }
    }

    //OBSERVAÇÃO = X -> VALOR LINHA(X)      Y -> VALOR COLUNA(Y)

    printf("\n\n\tOpções: \n");
    printf("\n\t[1]. Cadastrar ponto. ");
    printf("\n\t[2]. Listar pontos cadastrados. ");
    printf("\n\nEscolha: ");
    scanf("%d", &op);

    if (op == 1) {
        printf("\n\nInforme o nome do ponto: ");
        scanf(" %c", &letter[l]);
        l++;

        printf("Informe o valor de X: ");
        scanf("%d", &xa[xc]);

        printf("Informe o valor de Y: ");
        scanf("%d", &ya[yc]);

        if ((xa[xc]<=0) || (xa[xc]>10) || (ya[yc]<=0) || (ya[yc]>10)) {
            printf("\nCoordenadas incorretas. Ponto não será desenhado.\n\n");
            system("pause");
        }

        xc++;
        yc++;

    } else
        if (op == 2) {
            printf("\n\nPontos cadastrados: \n");

            for (x=0; x<l; x++) {
                printf("\n\t%c: [%d, %d]", letter[x], xa[x], ya[x]);
            }

            printf("\n\n");
            system("pause");
        }

    } while ((x != 0) || (y != 0));


}
