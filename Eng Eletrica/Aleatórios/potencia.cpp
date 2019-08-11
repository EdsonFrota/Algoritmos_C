#include<stdio.h>
int main () {
       int i, y;
       float x, resposta=1;

        printf("Digite um numero: ");
        scanf("%f", &x);
        printf("Digite o valor do expoente: ");
        scanf("%d", &y);
        for(i=y;i>0;i--){
        resposta*=x ;
        }
          printf("%g", resposta);

return 0;
}
