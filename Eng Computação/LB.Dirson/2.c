#include <stdio.h>
int main(){
float N,maior=-999999990;
do{
printf("Digite um valor: ");
scanf("%f",&N);
if(N>maior)
maior=N;
}while(N<=-1);
printf("O maior valor digitado foi %f",maior);
}
