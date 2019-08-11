#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"portuguese");

char Name[30];
float   salario,sl,iF,iE;

	printf("Digite o nome do funcionario:\n");
	scanf("%s",Name);
	
	printf("Digite o salario\n");
	scanf("%f",&salario);
	
	if (salario<5000){
		
		iE = (salario*0.1);
		iF = (salario*0.04);

}

		else if (salario<15000){
			
			iE = (salario*0.2);
			iF = (salario*0.06);

}

			else if (salario>=15000){
				
				iE =(salario*0.3);
				iF=(salario*0.06);
				
}
			
				
	sl=salario-(iF+iE);
printf("%s, o seu salario bruto é:\n%.2f \n seu salario liquido é:\n%.2f\n",Name,salario,sl);
system ("pause");

}
