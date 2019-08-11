/*c)Desenvolva a função	(sub-rotina) "diferencaMenoresValores",	 que recebe três
números	inteiros, e	retorna	a diferença	dos	dois menores valores.*/

#include<stdio.h>
int diferencaMenoresValores(int num1, int num2, int num3)
{
    int difereca;

    if ((num1 <= num2) && (num1 <= num3) && (num2 <= num3))
    {
        if(num1 <= num2)
            difereca = num2-num1;
        return difereca;
    }
    else if((num1 <= num2) && (num1 <= num3) && (num3 <= num2))
    {
        if(num1 <= num3)
            difereca = num3-num1;
        return difereca;
    }
    else if((num2 <= num1) && (num2 <= num3) && (num1 <= num3))
    {
        if(num2 <= num1)
            difereca = num1-num2;
        return difereca;
    }
    else if((num2 <= num1) && (num2 <= num3) && (num3 <= num1))
    {
        if(num2 <= num3)
            difereca = num3-num2;
        return difereca;
    }
    else if((num3 <= num1) && (num3 <= num2) && (num1 <= num2))
    {
        if(num3 <= num1)
            difereca = num1-num3;
        return difereca;
    }
    else if((num3 <= num1) && (num3 <= num2) && (num2 <= num1))
    {
        if(num3 <= num2)
            difereca = num2-num3;
        return difereca;
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
        printf("\nA diferenca entre dois valores iguas informados = %d\n",diferencaMenoresValores(num1, num2, num3));
    }
    else
    {
        printf("\nA diferenca entre os menores = %d\n",diferencaMenoresValores(num1, num2, num3));
    }
    return 0;
}
