#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 main () {
 	setlocale(LC_ALL, "Portuguese");
 	
 	int codigo;
 	
 	printf("Digite o código de Origem: ");
 	scanf("%d", &codigo);
 	
 	switch (codigo) {
 	 case 1: 
	 		printf("\n\tSUL\n");	
			 	break;
 		
 	 case 2:
	 	printf("\n\tNORTE\n");
	 		break;
	 
	 case 3: 
	 case 4:
	 	printf("\n\tNORDESTE\n");
			 break;
	 
	 case 5:
	 case 6:
	 case 7:
	 		printf("\n\tSUDESTE\n");
	 			break;
	 
	 case 8:
	 case 9:
	 case 10:
	 		printf("\n\tCENTRO OESTE\n");
	 			break;
	 
	 default:
	 	printf("\n\tCÓDIGO INVÁLIDO\n");
	 	
 	}
 	
 
 }
