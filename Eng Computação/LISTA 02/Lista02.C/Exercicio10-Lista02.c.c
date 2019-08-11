/*Questão 10*/
#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	if (a == b){
		
		printf("Os numeros sao iguais.\n\n");
	}else{
		printf("Sao numeros diferentes.\n\n");
	}
	
	system ("pause");
}
