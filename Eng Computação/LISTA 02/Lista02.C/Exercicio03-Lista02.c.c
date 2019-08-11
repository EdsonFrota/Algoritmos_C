/*Questão 03*/
#include <stdio.h>
#include<stdlib.h>
main ()
{
	float a, b, c, pA, pB, pC, resultado, pF;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &a );
	
	printf("Digite o segundo numero: ");
	scanf("%f", &b );
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &c );
	
	resultado = 3*(a+b)/(a*c)-c+b;
	pA = (a * a);
	pB = (b * b);
	pC = (c * c);
	pF = (pA + pB + pC);
	
	if (resultado > pF) {
		printf("O resultado e %f\n", resultado);
		
	}   else (resultado < pF); {
		printf("O produto de A, B e C e %f\n", pF);
		
	}
	system ("pause");
}
