#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main () {
setlocale(LC_ALL, "Portuguese");
float salario, reajuste;

	printf("Informe o sal�rio: ");
	scanf("%f", &salario);
	
		if (salario <= 500){
	
			reajuste = salario * 0.03;
			
   			printf("O reajuste ser� de", reajuste);
   			printf("O novo sal�rio ser� de R$%.2f\n\n", salario+reajuste);
   
}
		else {
	
 			printf("O sal�rio informado n�o permite reajuste.\n\n");
 	
}
 system("pause");
}


