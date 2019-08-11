#include<stdio.h>
int main ()
{
    int mes,ano;
    printf("Digite o mes(1 a 12):");
    scanf("%d", &mes);
    printf("Digite o ano desejado: ");
    scanf("%d",&ano);
    switch(mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("O mes possui 31 dias.");
        break;

    case 2:
        if(ano%4==0)
        {
            printf("Ano Bisexto portanto 1 dia a mais. O mes 2 tera 29 dias");
        }
        else
        {
            printf("28 dias");
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("O mes tem 30 dias");
        break;

    default:
        printf("mes invalido");
    }
    return (0);
    }
