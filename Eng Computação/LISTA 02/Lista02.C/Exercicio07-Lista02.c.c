/*Questão 07*/
#include<stdio.h>
#include<stdlib.h>
main ()
{
	float valor, lucro1, lucro2;
	
	printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    
    lucro1 = (valor * 0.45)+valor;
    lucro2 = (valor * 0.3)+valor;
    
    if (valor < 20.00){
    	printf("O lucro sera de %.2f\n", lucro1);
    }else  {
    	printf("O lucro sera de %.2f\n", lucro2);
    }
    
    system ("pause");
}
