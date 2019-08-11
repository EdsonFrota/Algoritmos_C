#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");
    srand(time(NULL));

    int grupo[40][3];
    int x, y, z, aux;

    //Distribuição dos números
    for (x=0; x<40; x++) {
        for (y=0; y<3; y++) {
            grupo[x][y] = rand()% 59;
        }
    }

    //Ordenação
    for (x=0; x<40; x++) {
        for(y=2; y>= 1; y--) {
            for(z=0; z<y ; z++) {
                if (grupo[x][z] > grupo[x][z+1]) {
                    aux = grupo[x][z];
                    grupo[x][z] = grupo[x][z+1];
                    grupo[x][z+1] = aux;
                }
            }
        }
    }

    //Exibição
    for (x=0; x<40; x++) {
            printf("Grupo %d: ", x+1);
        for (y=0; y<3; y++) {
            printf("%d ", grupo[x][y]);
        }
            printf("\n");
    }

}
