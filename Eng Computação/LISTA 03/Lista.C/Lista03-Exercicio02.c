#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main () {
	 setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta, x1, x2;
	
	printf("Digite os coeficientes A, B, C da equação: ");
 	scanf("%f %f %f", &a, &b, &c);

delta = b*b - 4*a*c;
x1 = (-b + sqrt(delta))/(2*a);
x2 = (-b - sqrt(delta))/(2*a);

if (delta < 0) {
	
	printf("NÃO TEM RAÍZES\n");
}else{

   	
      printf("AS RAÍZES SÃO %.2f %.2f\n\n", x1,x2);
}

   	
    system("pause");
}
