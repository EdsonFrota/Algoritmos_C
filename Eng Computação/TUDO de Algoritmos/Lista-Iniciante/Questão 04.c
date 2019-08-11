//Questão 04
//Calcula o percentual de aumento salarial
#include<stdio.h>

main ()
{
 float salario, prc, aumt, nvsl ;
 
  printf(" Digite o valor do salario: ");
  
   scanf("%f", &salario);
   
     printf("Digite o percentual de aumento:");
     
     scanf("%f", &prc);
     
    aumt = (salario * (prc / 100));
    
   nvsl = aumt + salario ;
   
  printf("O valor do aumento e de: %.2f\n", aumt);
  
 printf("O valor do novo salario e:R$ %.2f", nvsl);
}
