#include<stdio.h>
#include<math.h>
int main () {
  int an, a1, n=1, r;
  printf("Digite o termo: ");
  scanf("%d",&a1);
  printf("Digite a razao: ");
  scanf("%d",&r);
  for(n=1;n<=a1;n++){
an = a1*pow(r,n-1);

printf("\nPosicao = %d - valor = %d",n,an);
  }
return 0;
}

