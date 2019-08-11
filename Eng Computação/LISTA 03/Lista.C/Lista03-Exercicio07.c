#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main () {
	 setlocale(LC_ALL, "Portuguese");
	 int
	 U,D,C,N;
	 float
	 De;
	 printf ("digite um numero inteiro de 3 digitos\n");
	 scanf("%d",&N);
	 U= N%10;
	 D= (N%100)-U;
	 De=D/10;
	 printf("a dezena do numero eh :.0%f\n",De);

	 system("pause");



}
