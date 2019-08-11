#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void msg_erro()
{   setlocale(LC_ALL, "Portuguese");
    printf("SEXO INVÁLIDO");
}
int main ()
{
    char sexo;
    printf("Sexo (M/F): ");
    scanf("%c", &sexo);

    switch(sexo)
    {
    case 'M':
    case 'm':
        printf("\n\tMASCULINO\n");
        break;

    case 'F':
    case 'f':
        printf("\n\tFEMININO\n");
        break;
    default:
        msg_erro();
        break;

    }
    system("pause");
    return 0;
}
