#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"portuguese");

float so,sb,sl,tv42,tv29,c1,c2;
char name[33];
	printf("Digite o nome do funcionário:\n");
	scanf("%s",name);

	printf("Digite o salario funcionário:\n");
	scanf("%f",&so);

	printf("Digite o numero de tv's 29pld vendidas:\n");
	scanf("%f",&tv29);

	printf("Digite o numero de tv's 42pld vendidas:\n");
	scanf("%f",&tv42);

	if(tv42>=10){
		c1=20*tv42;
}
		else {
    		c1=10*tv42;
}
			if(tv29>=20){
				c2=5*tv29;
}
				else {
    				c2=3*tv29;
}
				sb=(0.92*so)+c1+c2;
				
					if (sb<=1300){
    					sl=sb;
}
					else if(sb>1300){
    					sl=0.95*sb;}
printf("%s,seu salario será de :%f\n",name,sl);
system("pause");


}
