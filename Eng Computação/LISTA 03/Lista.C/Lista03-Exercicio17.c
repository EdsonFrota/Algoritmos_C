#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");

float peso;
int idade;

	printf("Informe a Idade:\n");
	scanf("%d",&idade);
	
	printf("Informe o peso:\n");
	scanf("%f",&peso);

		if (idade<20&&peso<=60){
    printf("GRUPO DE RISCO 9");
}
			else if(idade<20&&peso>60&&peso<=90){
				
    printf("GRUPO DE RISCO 8\n");
    
    }
   			 else if (idade<20&&peso>90){
   			 	
        		printf("GRUPO DE RISCO 7\n");
        
    }
    			else if(idade>=20&&idade<=50&&peso<=60){
    				
        				printf("GRUPO DE RISCO 6\n");
        
    }
    				else if (idade>=20&&idade<=50&&peso<=60){
    					
        				printf("GRUPO DE RISCO 5\n");
        
        }
        
        				else if (idade>=20&&idade<=50&&peso>90){
        					
            					printf("GRUPO DE RISCO 4\n");
            
			}
							else if (idade>50&&peso<=60){
								
        						printf("GRUPO DE RISCO 3\n");
        
}
								else if (idade>50&&peso<=90){
									
     							printf("GRUPO DE RISCO 2\n");
     
}

  									else if (idade>50&&peso>90){
  										
         							printf("GRUPO DE RISCO 1\n");

  }



system("pause");




}

