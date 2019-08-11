#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

    setlocale(LC_ALL,"");

    //Determinando o tamanho do vetor.
    int n, x;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for (x=0; x<n; x++) {
        printf("[%d]: ",x);
        scanf("%d", &v[x]);
    }

    int qtd_par = 0;        //variavel para numero de valores pares.
    int qtd_impar = 0;      //variavel para numero de valores impar.
    float media_par ;    //media dos valores pares.
    float media_impar;  //media dos valores impar.

    for (x=0; x<n; x++) {
        if (v[x]%2 == 0) {
            //se for par, entra aqui.
            qtd_par++; }
        else {
            //se for impar, entra aqui.
            qtd_impar++;
        }
    }

    media_par = qtd_par/(float)n ;
    media_impar = qtd_impar/(float)n;

    printf("\nO número de valores pares no vetor é: %d", qtd_par);
    printf("\nA média de números pares no vetor é: %.2f", media_par);

    printf("\nO número de valores impares no vetor é: %d", qtd_impar);
    printf("\nA média de números impares no vetor é: %.2f", media_impar);

}
