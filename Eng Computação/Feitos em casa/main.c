#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("C�digo = 1 ::: y = (ax� - bx + c)/(bx - c)\n");
    printf("C�digo = 2 ::: y = ax� + bx + c\n");
    printf("C�digo = 3 ::: y = (ax + cx�)/(4x)\n");
    printf("C�digo = 4 ::: y = bx^4 - 1\n");
    printf("\n\n\t:::::::::::::::::::::::::::::::\n\n");

    int codigo;
    float a, b, c, x, formula;
    printf("Digite o c�digo da opera��o desejada: ");
    scanf("%d",&codigo);



    if((codigo <= 0) || (codigo > 4)){
        printf("\tC�digo Inv�lido\n\n");
    }
    else{
        printf("Digite o valor de A: ");
        scanf("%f",&a);

        printf("Digite o valor de B: ");
        scanf("%f",&b);

        printf("Digite o valor de C: ");
        scanf("%f",&c);

        printf("Digite o valor de x: ");
        scanf("%f",&x);

    float d1, d2;
    d1 = b*x - c;
    d2 = 4*x;
    if((d1 == 0) && (d2 == 0)){
    printf("\tC�digo Inv�lido\n\n");
    }
    else{
    switch(codigo){
        case 1:
        formula = (a*pow(x,2) - b*x + c)/d1;
        printf("O valor � %.2f",formula);
        break;

        case 2:
        formula = a*pow(x,2) + b*x +c;
        printf("O valor � %.2f",formula);
        break;

        case 3:
        formula = (a*x + c*pow(x,3))/d2;
        printf("O valor � %.2f",formula);
        break;

        case 4:
        formula = b*(pow(x,4)) - 1;
        printf("O valor � %.2f",formula);
        break;

        default:
        printf("C�digo Inv�lido");
     }
    }
  }
  system("Pause");
}
