//Questão 06
//Calcula o salário corrigido com descontos e gratificações
#include<stdio.h>
main () 
{
  float salario, grtf, imposto, dstc, nvsl;
  
   printf("Informe o seu salario: ");
   
    scanf("%f", &salario);
    
     grtf = salario * 0.05;
     
      printf("A sua gratificacao sera de: %.2f\n", grtf);
      
      imposto = salario * 0.07;
      
     printf("Voce ira pagar de imposto: %.2f\n", imposto);
     
    dstc = salario + imposto;
    
   nvsl = dstc + grtf;
   
  printf("Seu novo salario sera de: R$%.2f ", nvsl);
  
}
