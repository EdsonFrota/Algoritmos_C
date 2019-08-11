#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
	
 int N;
 
setlocale(LC_ALL, "Portuguese");
printf("Digite um número:");
scanf("%d", &N);

if (N % 3 == 0){
printf(" É multiplo de 3\n");
   
}
else{
	printf(" Não é multiplo de 3\n");
   
	
	}	
	system("pause");
}










