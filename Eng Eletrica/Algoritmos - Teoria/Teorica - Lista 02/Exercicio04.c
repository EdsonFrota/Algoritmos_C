/*4.	Escreva	um	algoritmo	que	leia	o	c�digo	de	um	determinado	produto	e	mostre	a	sua
classifica��o	de	acordo	com	a	tabela	apresentada	a	seguir:	*/

#include<stdio.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "");
    int codigo;
    printf("\tC�digo\n\t1\n\t2,3 ou 4\n\t5 ou 6\n\t7\n\t8 at� 15\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch(codigo)
    {

    case 1:
        printf("Alimento n�o perec�vel.\n");
        break;


    case 2 ... 4:
    /*case 3:
    case 4:*/
        printf("Alimento perec�vel.\n");
        break;

    case 5:
    case 6:
        printf("Vestu�rio.\n");
        break;

    case 7:
        printf("Higiene Pessoal.\n");
        break;

    case 8 ... 15:
    /*case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:*/
        printf("Limpeza e Utens�lios Dom�sticos.\n");
        break;

    default:
        printf("Inv�lido.\n");
    }
    return (0);
}
