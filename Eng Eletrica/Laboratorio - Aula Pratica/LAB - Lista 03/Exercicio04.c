/*4)Escreva um programa que receba dois n�meros e que disponibilize as op��es abaixo e imprima o
resultado da opera��o.:
1 - retornar o quociente inteiro de uma divis�o;
2 - retornar a multiplica��o de dois n�meros;
3 - retornar o soma de dois n�meros;
4 � retornar a subtra��o de dois n�meros.
5 � retornar mensagem de erro (op��o inv�lida) */

#include<stdio.h>
int main ()
{
    int op;
    float n1,n2,resultado;
    printf("Digite o 1a numero: ");
    scanf("%f",&n1);
    printf("Digite o 2a numero: ");
    scanf("%f",&n2);
    printf("\n\tOPCOES [1] [2] [3] [4] [5]\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &op);

    switch(op)
    {
    case 1:

        printf("\n[1] - Retorna o quociente inteiro de uma divisao\n");
        if (n1 >= n2)
        {
            resultado = n1/n2;
            printf("Resultado e: %.0f\n",resultado);
        }
        else
        {
            resultado = n2/n1;
            printf("Resultado e: %.0f\n",resultado);
        }
        break;

    case 2:
        printf("\n[2] - Retornar a multiplica�ao de dois numeros\n");
        resultado = n1*n2;
        printf("Resultado e: %.2f\n",resultado);
        break;

    case 3:
        printf("\n[3] - Retornar o soma de dois numeros\n");
        resultado = n1+n2;
        printf("Resultado e: %.2f",resultado);
        break;

    case 4:
        printf("\n[4] � Retornar a subtra�ao de dois numeros\n");
        resultado = n1-n2;
        printf("Resultad e: %.2f", resultado);
        break;

    case 5:
        printf("Erro (opcao invalida)");
        break;

    default:
        printf("SIGA AS OPCOES DISPONIVEIS!");

    }

    return(0);
}
