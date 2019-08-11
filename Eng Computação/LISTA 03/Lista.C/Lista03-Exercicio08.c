#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main () {
	 setlocale(LC_ALL, "Portuguese");
float
s,r;
printf("digite o salário do funcionario");
scanf("%f",&s);
if(s<=500){
r=s*0.03;
    printf("o reajuste será de %f\n",r);
printf("o salario será de %f\n",s+r);
}
else
    {printf("o salario nao entra na categoria de reajuste");}
system ("pause");



}
