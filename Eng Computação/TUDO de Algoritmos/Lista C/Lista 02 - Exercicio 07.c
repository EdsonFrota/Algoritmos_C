//Questão 07
//Informa o saldo de uma conta bancária
#include<stdio.h>
main ()
{
	 float salario, depst, total, nvsalario;
	 
     	printf("Informe o salario: ");
     	
	     scanf("%f", &salario);
	     
	     depst = (salario*0.003)*2;
	     
	    nvsalario = (salario - depst)+ 100 ;
	    
	  printf("O saldo atual e de:R$ %.2f", nvsalario);
	  
	
}
