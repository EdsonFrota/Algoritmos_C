// Questão 03
//Calcula o consumo de energia elétrico com desconto de 10%
#include<stdio.h>
main ()
{
	float consumo, valor, preco, desc ;
	
	 printf("Digite o seu consumo de energia:");
	 
	  scanf("%f", &consumo);
	  
	   printf("Digite o valor do Quilowatts: ");
	   
	    scanf("%f", &valor);
	    
	      preco = consumo * valor ;
	   
	        printf("Voce pagara de energia:R$ %.2f\n", preco);
	  
	          desc = preco - 0.10 ;
	 
	           printf("Com o desconto de 10 % voce ira pagar: %.2f", desc);
}
