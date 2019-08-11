#include<stdio.h>

int numeroA, numeroB, resto;
int main() {// MDC de positivosintnumeroA, numeroB, resto;
printf("Digite dois números (ordem crescente): ");
scanf("%d %d", &numeroA, &numeroB);
while(numeroA > 0) {
resto = numeroB % numeroA;numeroB = numeroA;
numeroA = resto;}
printf("MDC: %d", numeroB);
return 0;
}
