#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main ()
{
	
	setlocale (LC_ALL, "");
	
	float x, y;
	
	printf ("Digite os pontos X e Y:\n");
	
	printf("x:");
	
	scanf("%g", &x);
	
	printf ("y:");
	
	scanf("%g", &y);
	
	if (x==0)
	{
		if (y==0)
		printf("O ponto esta na origem\n");
		else
		{
			if (y > 0)
			printf("O ponto esta no eixo Y POSITIVO\n");
			else
			printf("O ponto esta no eixo Y NEGATIVO\n");
		}
	}
	else
	{
		if (x > 0)
		{
			if (y==0)
			printf("O ponto esta no eixo X POSITIVO\n");
			else 
			{
				if (y> 0)
				printf("O ponto esta no 1° Quadrante\n");
				else
				printf("O ponto esta no 4° Quadrante\n");
			}
			
		}
		else
		{
			if (y==0)
			printf("O ponto esta no eixo de X NEGATIVO\n");
			else
			{
				if(y > 0)
				printf("O ponto está no 2°Quadrante\n");
				else
				printf("O ponto está no 3° Quadrante\n");
			}
		}
	}
    system("pause");
}
