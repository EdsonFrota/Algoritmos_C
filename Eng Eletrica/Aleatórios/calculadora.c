#include<stdio.h>
int main ()
{
    char op;
    float n1,n2,resultado;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite a operacao matematica desejada [+][-][*][/]: ");
    scanf(" %c",&op);
    switch(op)
    {
    case '+':
        resultado = n1+n2;
        printf("%f",resultado);
        break;

    case '-':
        resultado = n1-n2;
        printf("%f",resultado);
        break;

    case '*':
        resultado = n1*n2;
        printf("%f", resultado);
        break;

    case '/':
        if (n2==0)
        {
            printf("Não é possivel dividir por 0.");
        }
        else
        {
            resultado = n1/n2;
            printf("%f",resultado);
        }
        break;

    default:
        printf("Operacao invalida.");

    }
    return 0;
}
