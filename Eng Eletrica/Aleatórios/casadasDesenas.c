#include<stdio.h>
int main () {
int numero, dezena;
printf("Digite um numero com 3 casa inteiro e positivo: ");
scanf("%d", &numero);
if (numero/100 <1){
    printf("Numero invalido");

    } else {
        dezena = (numero%100)/10;

        printf("O alg dezena e %d", dezena);
    }

return (0);
}
