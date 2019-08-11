#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int unidade, dezena, centena, numero;
 
 	printf("Digite um número com 3 casas:\n");
 	scanf("%d", &numero); 
 	
 	unidade = numero % 10;
 	dezena = (numero / 10) % 10;
 	centena = (numero / 100) % 10;
 	
 	printf(dezena);
 	
 	 
 	
 	system("pause");
	
	
	
	
	
}
