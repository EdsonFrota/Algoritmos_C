/* 3.O card�rio de uma lancheria � o seguinte:

        Especifica��o   | C�digo | Pre�o
        Cachorro Quente | 100    | 1.20
        Bauru Simples   | 101    | 1.30
        Bauru Com Ovo   | 102    | 1.50
        Hamb�rguer      | 103    | 1.20
        Cheeseburguer   | 104    | 1.30
        Refrigerante    | 105    | 1.00

Implemente um programa que leia	o c�digo do item pedido	e a quantidade, e calcule o
valor a ser pago por aquele lanche. Considere que a cada execu��o somente ser�
calculado um item. Use o comando switch.*/

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    int codigo;
    float preco, quantidade;
    printf("\tEspecifica��o   | C�digo | Pre�o\n\n");
    printf("\tCachorro Quente |  100   | R$ 1.20\n");
    printf("\tBauru Simples   |  101   | R$ 1.30\n");
    printf("\tBauru Com Ovo   |  102   | R$ 1.50\n");
    printf("\tHamb�rguer      |  103   | R$ 1.20\n");
    printf("\tCheeseburguer   |  104   | R$ 1.30\n");
    printf("\tRefrigerante    |  105   | R$ 1.00\n");

    printf("\nDigite o codigo do pedido desejado: ");
    scanf("%d", &codigo);

    printf("Informe a quantidade desejada: ");
    scanf("%f", &quantidade);

    switch(codigo)
    {
    case 100:
        printf("Voce pediu %.0f Cachorro Quente.\n",quantidade);
        preco = 1.20;
        quantidade =(quantidade*preco);
        printf("Voce ira pagar R$ %.2f.", quantidade);
        break;

    case 101:
        printf("Voce pediu %.0f Bauru Simples.\n",quantidade);
        preco = 1.30;
        quantidade = (quantidade*preco);
        printf("Voce ira pagar R$%.2f.", quantidade);
        break;

    case 102:
        printf("Voce pediu %.0f Bauru Com Ovo.\n",quantidade);
        preco = 1.50;
        quantidade =(quantidade*preco);
        printf("Voce ira pagar R$%.2f", quantidade);
        break;

    case 103:
        printf("Voce pediu %.0f Hamb�rguer.\n",quantidade);
        preco = 1.20;
        quantidade =(quantidade*preco);
        printf("Voce ira pagar R$%.2f", quantidade) ;
        break;

    case 104:
        printf("Voce pediu %.0f Cheeseburguer.\n",quantidade);
        preco = 1.30;
        quantidade =(quantidade*preco);
        printf("Voce ira pagar R$%.2f", quantidade);
        break;

    case 105:
        printf("Voce pediu %.0f Refrigerante.\n",quantidade);
        preco = 1.00;
        quantidade =(quantidade*preco);
        printf("Voce ira pagar R$%.2f", quantidade);
        break;

    default:
        printf("OP��O INDISPONIVEL !\n");

    }
    return (0);
}


