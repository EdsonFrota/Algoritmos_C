#include<stdio.h>
#include<stdlib.h>
int main (){
 int numero, uni, dez, cen, uml,ctm, dzm;
 printf("Numero: ");
 scanf("%d", &numero);

 uni = numero%10;
 dez = (numero%100)/10;
 cen = (numero/100)%10;
 uml = (numero/1000)%10;
 ctm = (numero/10000)%10;
 dzm = (numero/100000)%10;
 printf("\nunidade: %d\ndezena: %d\ncenten: %d\nU.Milhar: %d\nCentena Milhar: %d\nDezena Milhar:%d",uni, dez, cen, uml,ctm,dzm);

return (0);
}
