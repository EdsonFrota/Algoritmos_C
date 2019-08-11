#include <stdio.h>
int  main(){
int numero,n,soma=0;
printf("Digite um numero inteiro: ");
scanf("%d",&n);
for(numero=2;numero<=n;numero+=2){
soma+=numero;
}
printf("Soma: %d",soma);
}
