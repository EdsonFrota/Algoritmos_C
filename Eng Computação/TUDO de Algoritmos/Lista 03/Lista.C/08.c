#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main () {
setlocale(LC_ALL, "Portuguese");
float salario, reajuste;

	printf("Informe o salário: ");
	scanf("%f", &salario);
	
		if (salario <= 500){
	
			reajuste = salario * 0.03;
			
   			printf("O reajuste será de", reajuste);
   			printf("O novo salário será de R$%.2f\n\n", salario+reajuste);
   
}
		else {
	
 			printf("O salário informado não permite reajuste.\n\n");
 	
}
 system("pause");
}


