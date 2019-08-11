#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

main () {

    setlocale(LC_ALL, "");

    int n=5, i;

    //printf("Qtd. pontos: ");
    //scanf("%d", &n);

    float vetorX[n], vetorY[n];
    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0;

    float coefA, coefB;
    float R, Rnum, Rden;

    float maiorX, menorX;
    int op;
    float newX, newY;


    //Atribui��o de valores a variaveis X, Y e Somatorio.
    {
    for (i=0; i<n; i++) {
        printf("%d� ponto (x, y): ", i+1);
        scanf("%f %f", &vetorX[i], &vetorY[i]);
    }

    //Som�torio vetor X
    for (i=0; i<n; i++) {
        sumX += vetorX[i];
    }

    //Som�torio vetor Y
    for (i=0; i<n; i++) {
        sumY += vetorY[i];
    }

    //Somat�rio vetor X * vetor Y
    for (i=0; i<n; i++) {
        sumXY += vetorX[i] * vetorY[i];
    }

    //Somat�rio vetor X^2
    for (i=0; i<n; i++) {
        sumX2 += pow(vetorX[i], 2);
    }

    //Som�torio vetor Y^2
    for (i=0; i<n; i++) {
        sumY2 += pow(vetorY[i], 2);
    }

    system("cls");
    for (i=0; i<n; i++) {
        printf("%d� ponto (x, y): %.2f, %.2f\n", i+1, vetorX[i], vetorY[i]);
    }

    printf("\n\n");
    printf("\tX\tY\tXY\tX^2\tY^2\n");
    for (i=0; i<n; i++) {
        printf("\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", vetorX[i], vetorY[i], vetorX[i]*vetorY[i], pow(vetorX[i], 2), pow(vetorY[i], 2));
    }

    printf("TOTAL\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", sumX, sumY, sumXY, sumX2, sumY2);

    }

    //C�lculo dos coeficientes
    {

    coefA = (((n*sumXY) - (sumX*sumY)) / ((n*sumX2) - (pow(sumX, 2))));

    coefB = (((sumY*sumX2) - (sumX*sumXY)) / ((n*sumX2) - (pow(sumX, 2))));

    printf("\n\n\n");
    printf("Coeficiente A:\t%f\n", coefA);
    printf("Coeficiente B:\t%f\n", coefB);
    printf("\nEqua��o linear:\ty = %.2fx + %.2f\n", coefA, coefB);

    }

    //C�lculo do coeficiente de correla��o
    {
    Rnum = ((n*sumXY) - (sumX*sumY));
    Rden = sqrt(((n*sumX2) - (pow(sumX, 2)))) * sqrt(((n*sumY2) - (pow(sumY, 2))));
    R = Rnum/Rden;

    printf("\nO valor do coeficiente de correla��o �: %f", R);
    }

    //C�lculo intervalo X
    {
    for (i=0; i<n; i++) {

        if (i == 0) {
            maiorX = vetorX[i];
            menorX = vetorX[i];
        }

        else {
            if (vetorX[i] > maiorX) {
                maiorX = vetorX[i];
            }

            if (vetorX[i] < menorX) {
                menorX = vetorX[i];
            }
        }
    }

    }

    printf("\n\n");
    printf("\nOp��es: \n");

    printf("\n\t[1]. Entrar com valor de X. ");
    printf("\n\t[0]. Sair do programa. ");

    do {
        printf("\n\n-------------------------------\n");
        printf("Informe a op��o desejada: ");
        scanf("%d", &op);

        if (op == 0) {
            printf("\n\n [...]");
        }

        else {

            printf("\nInforme o valor de X: ");
            scanf("%f", &newX);

            if ((newX < menorX) || (newX > maiorX)) {
                printf("Valor informado fora do intervalo. (%.3f - %.3f)", menorX, maiorX);
            }

            else {
                newY = (coefA * newX) + coefB;
                printf("O valor de Y para o X informado � de: %f\n", newY);
            }

            printf("\n");

        }

    } while (op != 0);

    printf("\n\n\n");

}
