#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()  {
setlocale(LC_ALL, "Portuguese");


char cargo;

printf("Digite o código do cargo do funcionário:");
scanf("%c",&cargo);
switch (cargo){

case '1':
   printf("\n\tCargo, ESCRITURÁRIO, aumento 50%%\n");
   break;
case '2':
    printf("\n\tCargo, SECRETÁRIO, aumento 35%%\n");
    break;
case '3':
   printf("\n\tCargo, CAIXA, aumento 20%%\n");
   break;
case '4':
   printf("\n\tCargo, GERENTE, aumento 10%%\n");
   break;
case '5':
   printf("\n\tCargo, DIRETOR, aumento 0%%\n");
   break;
default:
   printf("\n\tCÓDIGO INVÁLIDO\n");

}
system("pause");
}
