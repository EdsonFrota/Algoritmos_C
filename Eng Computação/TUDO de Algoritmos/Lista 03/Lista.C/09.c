#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
main () {
	
int codigo;
	setlocale(LC_ALL, "Portuguese");

	printf("CODIG�S DE [1] A [5]\n\n");
	printf("Digite o c�digo do funcion�rio: ");
	scanf("%d", &codigo);
	
	if (codigo == 1){
 printf(" O cargo � ESCRITUR�RIO, o percentual de aumento � de 50\n\n");	
}
   
   
		else if (codigo == 2){
	 printf(" O cargo � SECRET�RIO, o percentual de aumento � de 35\n\n");
}
      
      
      
   			else if (codigo == 3){
   	 printf(" O cargo � CAIXA, o percentual de aumento � de 20\n\n");
   	
   }
        
         
         
      				else if (codigo == 4) {
      	printf(" O cargo � GERENTE, o percentual de aumento � de 10\n\n");
      	
      }
           
            
            
         					else if (codigo == 5) {
         	printf(" O cargo � DIRETOR, o percentual de aumento � de 0\n\n");
         	
         }
          system("pause") ;   
    }

