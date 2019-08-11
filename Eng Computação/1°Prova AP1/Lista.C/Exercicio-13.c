#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main () {

setlocale(LC_ALL, "Portuguese");

float x1, x2, y1, y2, d;

printf("Digite os pontos x1 e y1:");
scanf("%f %f", &x1, &y1);

printf("Digite os pontos ");
scanf("%f %f", &x2, &y2);

d = sqrt(pow(x2 - x1, 2)) + (pow(y2 - y2, 2));

printf("A distância entre os pontos é %.2f\n\n", d);

system ("pause");


}
