#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");

char nome[30];
float s1,s2,s3;
int np;

	printf("Digite o nome do funcion�rio: ");
	scanf("%s",nome);

	printf("Quantidade de pe�as produzidas: ");
	scanf("%d",&np);

		if (np <= 30) {
			
   			printf("%s  produziu %d  pe�as classe [A]",nome,np);
   			printf("seu salario vai ser R$ 788\n");
   			
}

			else if (np > 30&&np <= 35){
				
      		s1 = 788 * 3/100*(np-30);
     		printf("%s produziu %d pe�as , classe[B]",nome,np);
      		printf("seu salario vai ser R$%.2f\n", s1+788);
      
}
      
  				else if  (np > 35&&np <= 40){
  					
         			s2 = 788 * 5/100*(np-30);
         			printf("%s produziu %d pe�as, classe[C]",nome,np);
         			printf("seu salario vai ser R$%.2f\n", s2+788);
} 

	 				else if (np > 40){
	 					
            			s3 = 788 * 10/100*(np-30);
            			printf("%s produziu %d pe�as, classe[D]",nome,np);
            			printf("seu salario vai ser R$%.2f\n", s3+788) ;
}
system("pause");
}
