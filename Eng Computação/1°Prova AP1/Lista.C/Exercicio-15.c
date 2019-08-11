#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {

setlocale(LC_ALL, "Portuguese");

int anos, dias, meses;

printf("Digite a idade em anos:");
scanf("%d", &anos);

printf("Digite a idade em meses:");
scanf("%d", &meses);

printf("Digite a idade em dias:");
scanf("%d",&dias);

dias = (dias+(anos*360)+(meses*30));
printf("\n\tA idade em dias é %d\n\n", dias);

system ("pause");
}
