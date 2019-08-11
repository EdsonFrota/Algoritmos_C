#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main () {
	 setlocale(LC_ALL, "Portuguese");
	 int A,B,C,D;
printf("digite tres numeros inteiros em ordem crescente:");
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
printf("digite um numero inteiro qualquer");
scanf("%d",&D);
if (D>=C){
    printf("a ordem crescente é:%d,%d,%d,%d\n",A,B,C,D);
}
else if (D>=B){
printf ("a ordem crescentre é:%d,%d,%d,%d\n",A,B,D,C);}
else if (D>=A){
    printf ("a ordem crescente é:%d,%d,%d,%d\n",A,D,B,C);
}
else if (A>D) {
    printf("a ordem crecente é:%d,%d,%d,%d\n",D,A,B,C);
}

system ("pause");


















}
