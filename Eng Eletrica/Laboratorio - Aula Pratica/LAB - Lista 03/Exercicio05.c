/*5)Um palíndromo é um número que é lido da mesma forma tanto da direita para a esquerda como da
esquerda para a direita. Por exemplo, cada um dos inteiros seguintes, de quatro dígitos, são palíndromo:
1331, 5555, 4554 e 1661. Escreva um algoritmo que leia um número de quatro dígitos e determine se
ele e palíndromo ou não. Se o número não for de quatro dígitos imprima uma mensagem de erro.*/

#include<stdio.h>

int main()
{
    int numero,unidade, dezena, centena,milhar;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d",&numero);

    unidade = (numero%10);
    dezena = (numero%100)/10;
    centena = (numero/100)%10;
    milhar = (numero/1000)%10;

    if (numero > 999 && numero <= 9999)
    {
        if ((unidade == milhar) && (dezena == centena))
        {
            printf("\nEsse numero e PALINDRO!.\n");
        }
        else
        {
            printf("\nERRO! O numero digitado nao e palindromo.\n");
        }
    }
    else
    {

        printf("\nErro.Digite um numero com 4 digitos.");
    }
    return(0);
}
