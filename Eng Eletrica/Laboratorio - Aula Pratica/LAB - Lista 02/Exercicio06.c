/*6) Faça	um	programa	que	mostre	um	menu	de	opções	a	seguir,	receba	a	opção	do
usuário	e	os	dados	necessários	para	executar	cada	operação.
a. Somar	dois	números;
b. Raiz	quadrada	de	um	número
c. Digite	a	opção	desejada */

#include<stdio.h>
int main ()
{
    char menu;
    float n1,n2,soma, raiz;
    printf("\tMENU DE OPCOES\n\n");
    printf("a. Somar dois numeros\nb. Raiz Quadrada de um numero\nc.");
    printf(" Digite a opcao desejada: ");
    scanf(" %c", &menu);

    switch(menu)
    {
    case 'a':
        printf("\nSOMAR DOIS NUMEROS: ");
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        soma=n1+n2;
        printf("O resultado da opcao desejada e:%.2f\n", soma);
        break;

    case 'b':
        printf("\nRAIZ QUADRADA")    ;
        printf("\nDigite um numero: ");
        scanf("%f", &n1);
        raiz=sqrt(n1);
        printf("O resultado da opcao desejada e:%.2f\n",raiz);
        break;

    default:
        printf("Opcao Invalida.");

    }

    return (0);
}
