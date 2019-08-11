#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int x, n,r = 1, soma = 0;
    double s;

    for (x=0; x<64; ++x)
    {
        soma += r;
        r = r*2;
    }



    printf("O súdito ganhou %d grãos de arroz. ", soma);

    s = (double)s/50000;

    printf("\n\nCabem  %.2f sacos de arroz de 5kg. ", s);

        getch();
        return 0;


        system("pause");



}
