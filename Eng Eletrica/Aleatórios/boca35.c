#include<stdio.h>
#include<stdlib.h>

void leia(int m[][4]) {

    int x, y;

    for (x=0; x<4; x++) {
        for (y=0; y<4; y++) {

            scanf("%d", &m[x][y]);
        }
    }
}

void mostrar(int m[][4]) {

    int x, y;

    for (x=0; x<4; x++) {
        printf("\n");
        for (y=0; y<4; y++) {
            printf("\t[%d]", m[x][y]);
        }
    }

}

main() {

    int m[4][4];
    leia(m);
    mostrar(m);


}

