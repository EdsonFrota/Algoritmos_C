#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {

setlocale(LC_ALL, "Portuguese");

int numero;

    printf("Digite um n�mero:");
    scanf("%d", &numero);

    if (numero < 0){
    printf("\n\t N�MERO NEGATIVO\n\n");
    }
        else {
        printf("\n\tN�MERO POSITIVO\n\n");
    }
    system("pause");

}
