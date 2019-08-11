/*Questão 09*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main () {
	
	float a, b, raiz;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	 
	 raiz = sqrt(a);
	 raiz = sqrt(b);
	
	if (a < b){
		printf(" O quadrado do primeiro numero digitado e %.0f\n", a*a);
	}
	if (b < a){
		printf(" O quadrado do segundo numero digitado e %.0f\n", b*b);
	}
	
	if(a > b){
		printf(" A raiz do primeiro numero digitado e  %f\n",  raiz);
	}
	
	if (b > a){
		printf(" A raiz do segundo numero digitado e %f\n", raiz);
	}
	
	system("pause");
	
}
