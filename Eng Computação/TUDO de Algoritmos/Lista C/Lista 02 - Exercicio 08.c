//Questão 08
//Informa quanto resta de ração ao final de 5 dias
#include<stdio.h>
main ()
{
	float peso, qntrc, gt, resta, divl;
	
	 printf("Digite o peso do saco de racao:");
	 
	  scanf("%f", &peso);
	  
	   printf("Digite a quantidade de racao fornecida para cada gato:");
	   
	     scanf("%f", &qntrc);
	     
	      gt = qntrc * qntrc;
	      
	  resta = peso - gt;
	  
	divl = resta / 5;
	
  printf("Ao final de 5 dias restara de racao: %.2f",divl);
    
	
	
	
	
	
	
}
