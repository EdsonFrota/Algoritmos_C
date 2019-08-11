#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {

setlocale(LC_ALL, "Portuguese");

int numero;

    printf("Digite um número:");
    scanf("%d", &numero);

    if (numero < 0){
    printf("\n\t NÚMERO NEGATIVO\n\n");
    }
        else {
        printf("\n\tNÚMERO POSITIVO\n\n");
    }
    system("pause");

}
