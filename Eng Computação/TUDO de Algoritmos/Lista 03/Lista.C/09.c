#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
main () {
	
int codigo;
	setlocale(LC_ALL, "Portuguese");

	printf("CODIGÓS DE [1] A [5]\n\n");
	printf("Digite o código do funcionário: ");
	scanf("%d", &codigo);
	
	if (codigo == 1){
 printf(" O cargo é ESCRITURÁRIO, o percentual de aumento é de 50\n\n");	
}
   
   
		else if (codigo == 2){
	 printf(" O cargo é SECRETÁRIO, o percentual de aumento é de 35\n\n");
}
      
      
      
   			else if (codigo == 3){
   	 printf(" O cargo é CAIXA, o percentual de aumento é de 20\n\n");
   	
   }
        
         
         
      				else if (codigo == 4) {
      	printf(" O cargo é GERENTE, o percentual de aumento é de 10\n\n");
      	
      }
           
            
            
         					else if (codigo == 5) {
         	printf(" O cargo é DIRETOR, o percentual de aumento é de 0\n\n");
         	
         }
          system("pause") ;   
    }

