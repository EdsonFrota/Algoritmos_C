/*Questão 13*/
#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, b;
	
	  printf("Digite o primeiro numero: ");
	  scanf("%d", &a);
	  
	   printf("Digite o segundo numero: ");
	    scanf("%d", &b);
	    
	if ((a < b) && (b > a)){
			printf("%d\n\n", a, b);
			
	}else ((b < a ) && (a > b));
	{
		printf("%d\n\n", b, a);
	}

	system ("pause");
}
