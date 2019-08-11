/*Questão 12*/
#include<stdio.h>
#include<stdlib.h>
main (){
   int a, b;
 
        printf("Digite um numero: ");
        scanf("%d", &a);
 
         printf("Digite outro numero: ");
         scanf("%d", &b);
 
          if(a > b){
          	printf("O menor numero e %d\n\n", b);
          	
          }else {
          	printf("O menor numero e %d\n\n", a);
          	
          }
 
      system ("pause");
 
}
