#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main(){
 setlocale(LC_ALL,"Portuguese");

 float tempoP, tempoG, d, d2;
 int incs;
 
 	printf("Digite o tempo padrao em minutos:");
 	scanf("%f",&tempoG);
 	
 	printf("Digite o tempo gasto pela equipe:");
 	scanf("%f",&tempoG);
 	
 	printf("Digite o número de inscriçao da equipe:");
 	scanf("%d",&incs);
 	
 d= tempoG-tempoP;
 d2=80 -((d-5)/5);
 
 	if(d<3){
 	
    printf("100 pnts para a equipe %d\n",incs);
    
 }
 
 		else if (d>=3&&d<5){
 	
    printf ("80 pnts para equipe %d\n",incs);

 }
 
 			else if (d>=5){
 				
    printf ("%.2f pnts para a equipe %d\n",d2,incs);
    
 }
 system ("pause");


}
