#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
	
 int N;
 
setlocale(LC_ALL, "Portuguese");
printf("Digite um n�mero:");
scanf("%d", &N);

if (N % 3 == 0){
printf(" � multiplo de 3\n");
   
}
else{
	printf(" N�o � multiplo de 3\n");
   
	
	}	
	system("pause");
}










