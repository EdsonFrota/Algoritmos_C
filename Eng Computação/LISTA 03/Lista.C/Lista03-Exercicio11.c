#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
float
S,v1;
printf ("digite o saldo m�dio:");
scanf("%f",&S);
if (S<=200){
    v1=S*0.05;
    printf("o seu saldo m�dio � de %f\n",S);
    printf("o valor do cr�dito ser� de at� %f R$\n",v1);}
    else if (S>4000){
    v1=S*0.2;
    printf("o seu saldo m�dio � de %f\n",S);
    printf("o valor do cr�dito ser� de at� %f R$\n",v1);
    }
    else if (S<=4000&&S>1000){
            v1=S*0.15;
         printf("o seu saldo m�dio � de %f\n",S);
    printf("o valor do cr�dito ser� de at� %f R$\n",v1);
    }
    else if (S<=1000&&S>200){
        v1=S*0.1;
         printf("o seu saldo m�dio � de %f\n",S);
    printf("o valor do cr�dito ser� de at� %f R$\n",v1);
}
system("pause");
}
