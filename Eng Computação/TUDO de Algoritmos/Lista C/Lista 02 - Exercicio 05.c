// Questão 05
//Calcula o salario que um determinado funcionário ira receber
#include<stdio.h>

main ()
{ 
	float slro, impt, grat, nvsl;
	
	 printf("Digite o salario do funcionario: ");
	 
	  scanf("%f", &slro);
	  
	   impt = slro * 0.10 ;
	   
	  grat = 1000 ;
	  
	 nvsl = (slro - impt) + grat ;
	 
	printf(" O salario que o funcionario tem a receber e:R$%.2f ", nvsl);
	
	
}

