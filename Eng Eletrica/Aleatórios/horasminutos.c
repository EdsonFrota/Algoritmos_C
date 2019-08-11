#include<stdio.h>
#include<math.h>
#define valorhora 3600
#define valorminuto 60

int main()
{
 int segundostotal, horas, minutos, segundos, aux;

 scanf("%d",&segundostotal);

 horas = segundostotal / valorhora;
 aux = segundostotal % valorhora;
 minutos = aux / valorminuto;
 segundos = aux % valorminuto;

 printf("%d HORAS %d MINUTOS %d SEGUNDOS\n",horas,minutos,segundos);

 return 0;

}
