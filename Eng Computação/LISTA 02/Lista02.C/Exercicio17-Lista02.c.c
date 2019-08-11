/*Questão 17*/
#include<stdio.h>
#include<stdlib.h>
main () {
	
	char sexo;
	float altura, imc;
	
		printf("Digite seu sexo: ");    /*M para sexo MASCULINO*/ /*F para FEMININO*/ 
	    scanf("%c", &sexo);
	
	    printf("Digite sua altura: ");
	    scanf("%f", &altura);
	
	
	if (sexo == 'M'){
		  	imc = (72.7*altura)- 58;
		       printf("O peso ideal e: %.2f\n\n\n", imc);
		       
	} 
	
	if (sexo == 'F'){
			  imc = (62.1*altura)- 44.7;
		       printf("O peso ideal e: %.2f\n\n\n", imc);
	}
	system("pause ");
}


