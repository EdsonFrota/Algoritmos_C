#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
int N;
	printf("Digite um N�mero:\n ");
	scanf("%d",&N);
	
	if (N%3==0){
	
printf("%d  � multiplo de 3\n",N);
printf("a divisao da %d\n",N/3);

}
		else{
		
    printf("%d N�o 	� multiplo de 3\n" ,N);
	printf("a divisao da %d\n",N/3);
	
	}
	system ("pause");
}
