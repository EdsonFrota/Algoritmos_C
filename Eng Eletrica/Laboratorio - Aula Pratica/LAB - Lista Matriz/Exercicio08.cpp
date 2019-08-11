/*8) Uma matriz quadrada inteira é um quadrado mágico se a soma dos
elementos de cada linha, a soma dos elementos de cada coluna e a soma
dos elementos das diagonais principal e secundária são todas iguais.
Faça um programa que leia uma matriz 3x3 e verifique se esta é um
quadrado mágico.*/
#include<stdio.h>
int main ()
{
    int i, j, E[3][3], soma_P=0;
    int soma_L0=0, soma_L1=0,soma_L2=0, soma_C0=0, soma_C1=0, soma_C2=0;

    printf("Informe os elementos da Matriz 3x3:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&E[i][j]);
        }
    }

    printf("Matriz Gerada:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%3d", E[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(i==0) {
                soma_L0+=E[0][j];
            } else if (i == 1) {
                soma_L1+=E[1][j];
            } else if(i == 2) {
                soma_L2+=E[2][j];
            }
        }
    }
    printf("\nSoma das Linhas \nLinha 0: %d \nLinha 1: %d \nLinha 2: %d\n",soma_L0,soma_L1,soma_L2);

    for(j=0; j<3; j++) {
        for(i=0; i<3; i++) {
            if(j==0) {
                soma_C0+=E[i][0];
            } else if(j==1) {
                soma_C1+=E[i][1];
            } else if (j==2) {
                soma_C2+=E[i][2];
            }
        }
    }
    printf("\nSoma das Colunas \nColuna 0: %d \nColuna 1: %d \nColuna 2: %d\n",soma_C0, soma_C1, soma_C2);

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(i==j) {
                soma_P+=E[i][j];
            }
        }
    }
    printf("\nSoma Diagonal Principal: %d \n",soma_P);

    if(soma_L0 != soma_C0) {
        printf("\nA Matriz informada nao e um quadrado magico.\n");
    } else {
        printf("\nA Matriz informa e um quarado magico.\n");
    }


    return 0;
}
