/*4.	Escreva	um	algoritmo	que	leia	o	código	de	um	determinado	produto	e	mostre	a	sua
classificação	de	acordo	com	a	tabela	apresentada	a	seguir:	*/

#include<stdio.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL, "");
    int codigo;
    printf("\tCódigo\n\t1\n\t2,3 ou 4\n\t5 ou 6\n\t7\n\t8 até 15\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch(codigo)
    {

    case 1:
        printf("Alimento não perecível.\n");
        break;


    case 2 ... 4:
    /*case 3:
    case 4:*/
        printf("Alimento perecível.\n");
        break;

    case 5:
    case 6:
        printf("Vestuário.\n");
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
        printf("Limpeza e Utensílios Domésticos.\n");
        break;

    default:
        printf("Inválido.\n");
    }
    return (0);
}
