#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 main () {
 	setlocale(LC_ALL, "Portuguese");
 	 int cargo;
 	 
 	 printf("Digite o Cargo:");
 	 scanf("%d", &cargo);
 	 
 	 switch (cargo){
	  case 1:
	  	printf("\n\tESCRITUR�RIO, 50\n");
	  break;
	  
	  case 2:
	  	printf("\n\tSECRETR�RIO, 35\n");
		break;
		
		case 3:
		printf("\n\tCAIXA, 20\n");
		break;
		
		case 4:
		printf("\n\tGERENTE, 10\n");
		break;
		
		case 5:
		printf("\n\tDIRETOR, n�o tem aumento\n");
		break;
		
		default:
			printf("\n\tC�DIGO INV�LIDO\n");
			
		
	  }
 }
