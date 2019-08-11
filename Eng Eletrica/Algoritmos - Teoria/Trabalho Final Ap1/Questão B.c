/*b)Desenvolva a função (sub-rotina) "somaMaioresValores", que recebe três números
inteiros, e	retorna	 a soma dos dois maiores valores.*/

#include<stdio.h>
int somaMaioresValores(int num1, int num2, int num3)
{
    int soma;
    if((num1 >= num2) && (num1 >= num3) && (num2 >= num3))
    {
        soma = num1+num2;
        return soma;
    }
    else if((num2 >= num1) && (num2 >= num3) && (num1 >= num3))
    {
        soma = num2 + num1;
        return soma;
    }
    else if((num3 >= num1) && (num3 >= num2) && (num1 >= num2))
    {
        soma = num3 + num1;
        return soma;
    }
    else if((num3 >= num1) && (num3 >= num2) && (num2 >= num1))
    {
        soma = num3 + num2;
        return soma;
    }
    else if((num1 >= num2) && (num1 >= num3) && (num3 >= num2))
    {
        soma = num1 + num3;
        return soma;
    }
    else if ((num2 >= num1) && (num2 >= num3) && (num3 >= num1))
    {
        soma = num2 + num3;
        return soma;
    }
}
int main ()
{
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    printf("Digite o terceiro numero: ");
    scanf("%d",&num3);

    if((num1 == num2) && (num2 == num3))
    {
        printf("\nOs numeros informados sao iguais.");
        printf("\nA soma de dois valores iguais informados = %d\n",somaMaioresValores(num1, num2, num3));
    }
    else
    {
        printf("\nA soma dos maiores valores = %d\n",somaMaioresValores(num1, num2, num3));
    }
    return 0;
}

