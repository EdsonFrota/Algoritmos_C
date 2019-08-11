#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	int codpdt, codpais;
	float kgs, g, pg, prt, vt;
	
	printf("\t:::CÓDIGO DO PRODUTO DE [1] A [10]::::\n\n");
	printf("Digite o codigo do produto:");
	scanf("%d", &codpdt);
	
	printf("Digite o prço do produto em kilos:");
	scanf("%f", &kgs);
	
	printf("\t::::CÓGIGOS [1] A [3]::::\n\n");
	printf("Digite o código do país de origem:");
	scanf("%d", &codpais);
	
	g= kgs/0.0010000;
	pg= kgs/0.1;
	prt= g*pg;
	
	switch (codpais){
		case 1: 
		printf("NÃO TEM IMPOSTO");
	    break;
	    
	    case 2:
	    	vt= prt*0.15;
	    	printf("o valor total da compra será de %.1f", vt);
	    	break;
	    	
	    case 3:
	    	vt= prt*0.25;
	    	printf("o valor total da compra será de %.1f", vt);
	    	break;
	    	
	    default:
	    	printf("CODIGO INVÁLIDO");
	    	
	}
	switch (codpdt){
		case 1: case 2: case 3: case 4:
			pg + 10;
			printf("%f", pg);
			break;
			
		case 5: case 6: case 7:
			pg + 25;
			printf("%f", pg);
			break;
			
		case 8: case 9: case 10:
			pg + 35;
			printf("%f", pg);
			
			
		default:
			printf("CÓDIGO INVÁLIDO");
	}
}
