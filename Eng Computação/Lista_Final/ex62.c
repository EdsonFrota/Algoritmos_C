#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int c;
    float n1, n2, n3;
    float mP;

    do {

        system("cls");

        printf("Código: ");
        scanf("%d", &c);

        if (c < 0) {
            printf("exit.");
        }

        else {

        printf("Nota 1: ");
        scanf("%f", &n1);

        printf("Nota 2: ");
        scanf("%f", &n2);

        printf("Nota 3: ");
        scanf("%f", &n3);

        if ((n1 > n2) && (n1 > n3)) {
            n1 = n1*4;
            n2 = n2*3;
            n3 = n3*3;

            mP = (n1+n2+n3)/10;
        } else
            if ((n2 > n1) && (n2 > n3)) {
                n2 = n2*4;
                n1 = n1*3;
                n3 = n3*3;

                mP = (n1+n2+n3)/10;
            } else
                if ((n3 > n2) && (n3 > n1)) {
                    n3 = n3*4;
                    n1 = n1*3;
                    n2 = n2*3;

                    mP = (n1+n2+n3)/10;
                }


        printf("\n\n");
        printf("Código do aluno: %d", c);
        printf("\n\tNota 1: %.2f", n1);
        printf("\n\tNota 2: %.2f", n2);
        printf("\n\tNota 3: %.2f", n3);
        printf("\nMédia ponderada: %.2f", mP);

        if (mP >= 6) {
            printf("\n\nAPROVADO. ");
        } else {
            printf("\n\nREPROVADO. ");
        }

        system("pause");

    }

    } while(c > 0);


}


