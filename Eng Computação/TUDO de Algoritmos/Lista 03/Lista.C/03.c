#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	
	int N1, N2, N3;
printf("Digite 3 n�meros:");
scanf("%d %d %d", &N1, &N2, &N3);

if ((N1 > N2) && (N3 > N2))
{
	printf(" O menor numero � %d");
}
else 
{
	if ((N2 > N3) && (N1 > N3))
	{
	printf(" O menor n�mero � %d");	
		
	}
  
}else 
 {
 
 if ((N3 > N1) e (N2 > N1))
      	
      	printf("O menor n�mero � %d");
      	
      }

    
}
