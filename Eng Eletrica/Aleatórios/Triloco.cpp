#include <stdio.h>
#include <stdlib.h>

int verifica_vetor(int vetor[], int n) {

    int vetor_ordenado[n];

    int aux, i, j, x;

    //Por padrão, a variável key será igual a 0.
    int key = 0;

    for (x=0; x<n; x++) {
        vetor_ordenado[x] = vetor[x];
    }

    //Ordena o array ~ pesquisar sobre Bubble Sort
    for(i=n-1; i>=1; i--) {
        for(j=0; j<i; j++) {

            if(vetor_ordenado[j] > vetor_ordenado[j+1]) {
                aux = vetor_ordenado[j];
                vetor_ordenado[j] = vetor_ordenado[j+1];
                vetor_ordenado[j+1] = aux;
            }
        }
    }

    //Compara os dois vetores
    for (x=0; x<n; x++) {

        if (vetor[x] != vetor_ordenado[x]) {
            //Se uma das posições dos vetores forem diferentes, a variável key muda para 1.
            key = 1;
        }
    }

    return key;

}

main() {

    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n], x;

    for (x=0; x<n; x++) {
        printf("Insira valor da posicao %d: ", x);
        scanf("%d", &vetor[x]);
    }

    if (verifica_vetor(vetor, n) == 0) {
        printf("O vetor esta ordenado.");
    } else {
        printf("O vetor nao esta ordenado.");
    }


}
