#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main() {
	
	setlocale(LC_ALL,"Portuguese");
	float H,He,Fm,G;
	
printf("Informe a quantidade de horas extras em minutos:\n");
scanf("%f",&He);

printf("quantidade de faltas em minutos:\n");
scanf("%f",&Fm);

H=He-(2/3)*Fm;

	if(H>2400){
	
    G=500;
    
}
		else if(H>1800){
			
    	G=400;
}
			else if(H>1200){
				
 				G=300;
}
				else if(H>600){
					
    				G=200;
    				
}
					else {
						
						G=100;
						
	}
	
    
    printf("A gratificação será de %f\n",G);
    system ("pause"<0);



}
