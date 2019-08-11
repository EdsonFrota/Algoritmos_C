#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");
    float E, R, pi;
    char H;

    do
    {

        pi = 3.14;

        printf("Raio: ");
        scanf("%f", &R);

        E = 2*pi*R;

        printf("Área do círculo é = %.2f. \n\n", E);

        printf("Deseja calcular mais áreas? Sim (S) ou Não (N)? ");
        scanf(" %c", &H);



    }
    while (H!= 'N');

    getch();
    return 0;


    system("pause");


}


