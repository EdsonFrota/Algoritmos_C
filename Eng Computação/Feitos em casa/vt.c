#include<stdio.h>
int main(void){
int i, indice=-1;
float v[6];
float valor, elem = 1.0;
scanf("%d",v[i]) ;
 printf("Digite valor: ");
        scanf("%f", &valor);
for (i=0;i<6; ++i){
if(v[i] == elem){
    indice = i;
}
}
if (indice >=0)
    printf("ENCONTRADO! posição: %d", indice);
else
printf("NÃO ENCONTRADO");
return 0;
}
