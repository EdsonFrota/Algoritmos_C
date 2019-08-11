#include<stdio.h>
#include<math.h>
#include<locale.h>
#define PI 3.14159265

float angulo, sen, coss, tg;
//PI = 3.14159265;

void Seno()
{
    setlocale(LC_ALL, "");
    printf("\n Digite o Ângulo em graus.: ");
    scanf("%f", &angulo);
    sen = sin(angulo*PI/180);
    printf("\n O Seno de %.0f é = %f\n", angulo, sen);

}

void Cosseno()
{
    printf("\n Digite o Ângulo em graus.: ");
    scanf("%f", &angulo);
    coss = cos(angulo*PI/180);
    printf("\n O Cosseno de %.0f é = %f\n", angulo, coss);

}

void Tangente()
{
    printf("\n Digite o Ângulo em graus.: ");
    scanf("%f", &angulo);
    tg = tan(angulo*PI/180);
    printf("\n O Tangente de %.0f é = %f\n", angulo, tg);

}

int main()
{
    setlocale(LC_ALL, "");
    int op;

    printf("\n\t=============== CALCULADORA TRIGONOMÉTRICA ===============\n");
    printf("\n\tMenu:\n");
    printf("\n\t [1]-Seno");
    printf("\n\t [2]-Cosseno");
    printf("\n\t [3]-Tangente");
    printf("\n\n\tOpcão.: ");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        Seno();
        break;

    case 2:
        Cosseno();
        break;

    case 3:
        Tangente();
        break;

    default:
        printf("\nErro! Opcão Inexistente.\n");
        break;

    }
    getch();
    return(0);

}
