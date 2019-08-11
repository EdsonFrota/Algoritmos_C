/*Questão 11*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, b;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	if (a > b){
		printf("O maior numero e %d\n\n", a);
	} else {
		printf("O maior numero e %d\n\n", b);
	}
	
	system("pause");
}
