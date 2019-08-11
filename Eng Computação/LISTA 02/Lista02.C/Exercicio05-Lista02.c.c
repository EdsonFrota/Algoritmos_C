/*Questão 05*/
#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a;

	printf("Informe um numero:");
	scanf("%d", &a);

	if ((a >= 100) && (a <= 1000)){

		printf("O numero %d esta na faixa entre 100 a 1000\n", a);

	} else {
		printf("O numero %d nao esta na faixa de 100 a 1000\n", a);
	}

	system ("pause");
}


