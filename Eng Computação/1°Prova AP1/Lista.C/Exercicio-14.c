#include<stdio.h>
#include<locale.h>

main () {
setlocale(LC_ALL, "Portuguese");
int a, b, c;
float r, s, d;

    printf("Digite tr�s n�meros:");
    scanf("%d %d %d", &a, &b, &c);

r = (a+b)^2;
s = (b+c)^2;
d = (r+s)/2;
    printf("O valor da express�o � %.2f\n\n", d);

    system("Pause");
}
