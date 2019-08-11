#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, r;
	char operador;
	
	printf("Digite o primeiro número:");
	scanf("%d", &num1);
	
	printf("Informe o Operador:");
	scanf("%s", &operador);
	
	printf("Informe o segundo numero:");
	scanf("%d", &num2);
	
	switch (operador) {
		case '+':
			printf("\n\t%d\n\n", num1+num2);
			break;
		
		case '-':
			printf("\n\t%d\n\n", num1-num2);
			break;
			
		case'*':
			printf("\n\t%d\n\n", num1*num2);
			break;
			
		case'/':
			printf("\n\t%d\n\n", num1/num2);
			break;
			
		default:
			printf("\n\tOPERAÇÃO INVÁLIDO\n\n");
		
			}
			system("pause");
	}
