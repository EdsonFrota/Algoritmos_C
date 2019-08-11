#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"portuguese");

float Y;
int a,b,c,x,cod;

	printf ("digite 4 valores:\n");
	scanf("%d%d%d%d",&a,&b,&c,&x);

	printf ("digite um codigo de de [1-4]:\n");
	scanf("%d",&cod);

	if (cod==3&&x==0) {

        printf("Divisao por zero no codigo 3\n");
}
		else if (cod==1&&b*x-c==0){

    printf ("Divisao por zero no codigo 1\n");
}
			else if(cod==1){
				Y = (a*x^2) - b*x + c/(b*x - c);
}
				else if(cod==2){
					Y= a*x^2 + b*x + c;
}
					else if(cod==3){
						Y= (a*x + c*x^3)/ 4*x;

}
						else if (cod==4){
   						 Y= b*x^4 - 1;
}
printf ("O resultado é %.1f",Y);


system("pause");

}
