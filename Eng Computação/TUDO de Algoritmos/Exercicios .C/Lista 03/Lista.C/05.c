#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
float N,M,O;
printf(" ************** CALCULADORA **********\n\n\n\n")  ;
printf("Escolha Operacao Dispon�vel:: \n\n");
printf("ADICAO{1}:::SUBTRACAO{2}:::MULTIPLICACAO{3}:::DIVISAO{4}:::\n\n");
printf(" Informe a opera��o desejada:");
scanf("%f",&O);
printf("Digite o primeiro numero:");
scanf("%f",&N);
printf("Digite o segundo numero:");
 scanf("%f",&M);
 
    if(O==1){
    	
        printf("O resultado da adi��oo �:%.1f",M+N);
        
		}
        else if(O==2) {
        	
            printf("o rsultado da subtra��o �: %.1f\n",N-M);
            
			}
            else if(O==3){
            	
                printf("O resultado da multiplica��o �:%.1f\n",N*M);
                
            }

        else {
        	
            printf("O resulta da divis�o �:%.1f\n",N/M);
            
        }
            system ("pause");
    }

