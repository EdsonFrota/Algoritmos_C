#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void soma (int m) {

    int x, soma=0;

    for (x=1; x<=m; ++x) {
        soma += x;
    }

    printf("O somatório de %d é %d. ", m, soma);
}

void fatorial (int m) {

    int x, fat=1;

    for (x=1; x<=m; ++x) {
        fat *= x;
    }

    printf("Fatorial de %d é = %d. \n", m, fat);

}

void checarDivisores (int m) {

    int x, q=0;

    for (x=1; x<=m; ++x) {

        if (m%x == 0) {
            ++q;
        }
    }

    printf("O número %d possui %d divisores. \n", m, q);
}

int main() {

    setlocale(LC_ALL, "");

    int t, x, m;

    printf("1° NÚMERO: ");
    scanf("%d", &t);

    for (x=0; x<t; x++) {

        printf("NÚMERO: ");
        scanf("%d", &m);

        if (m%2 == 0) {
        } else
            if ((m%2 != 0) && (m < 10)) {
                fatorial(m);
            } else
                if ((m%2 != 0) && (m >= 10)) {
                    soma(m);
                }
    }


    getch();
    return 0;


    system("pause");
}

