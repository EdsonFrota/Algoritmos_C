#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
 main () {
	setlocale(LC_ALL, "Portuguese");
int Idade;
	printf ("Informe a idade da pessoa:\n");
	scanf("%d",&Idade);
	
	if (Idade<=2){
	
    	printf("RECÉM- NASCIDO\n");
    
	}

    	else if(Idade>=3 && Idade<=11){
        
			printf("CRIANÇA\n");
		
		}
        	else if (Idade>=12 && Idade<=19){

            	printf("ADOLESCENTE\n");
        }
             	else if(Idade>=20 && Idade<=55){
             	
                	printf ("ADULTO\n");
                
            }
            	else if(Idade > 55) {
            	
                	printf("IDOSO\n");
            }

        	system("pause");
        }
