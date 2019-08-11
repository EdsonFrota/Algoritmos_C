#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main () {

setlocale(LC_ALL, "Portuguese");

float a,b,c,d,x1,x2;

printf("Digite os valores de A, B, C:");
scanf("%f %f %f", &a ,&b, &c);

d = (b*b) - 4*a*c;

if (d < 0) {

printf("\n\tNÃO TEM RAÍZES REAIS!\n\n");

}
else {


x1 = (-b + sqrt (d)) /(2*a);
x2 = (-b - sqrt (d)) /(2*a);

printf("x1 = %.2f\n", x1);
printf("x2 = %.2f\n", x2);

}
system("pause");
}
