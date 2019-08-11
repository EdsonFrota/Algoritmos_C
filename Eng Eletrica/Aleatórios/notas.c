#include<stdio.h>


int main()
{
    int valorreais, nota100, nota50, nota10, nota1, aux;

    scanf("%d",&valorreais);

    nota100 = valorreais / 100;
    aux = valorreais % 100;
    nota50 = aux / 50;
    aux = aux % 50;
    nota10 = aux / 10;
    nota1 = aux % 10;

    printf("NOTAS DE 100 = %d\n",nota100);
    printf("NOTAS DE 50 = %d\n",nota50);
    printf("NOTAS DE 10 = %d\n",nota10);
    printf("NOTAS DE 1 = %d\n",nota1);

    return 0;
}
