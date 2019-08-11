// Questão 01
// calcula a idade atual de uma pessoa e quantos anos ela terá em 2050
#include<stdio.h>
main () 
{
int nas, ano, media, futuro ;

 printf ("Em que ano voce nasceu? ");
 
  scanf ("%d", &nas);
  
    printf ("Em que ano nos estamos? ");
    
    scanf ("%d", &ano);
    
    media = (ano - nas);
    
   futuro = (2050 - nas);
   
 printf("A sua idade e : %d\n",media);
 
printf("Em 2050 voce tera: %d", futuro);
  }



