/*5)Um pal�ndromo � um n�mero que � lido da mesma forma tanto da direita para a esquerda como da
esquerda para a direita. Por exemplo, cada um dos inteiros seguintes, de quatro d�gitos, s�o pal�ndromo:
1331, 5555, 4554 e 1661. Escreva um algoritmo que leia um n�mero de quatro d�gitos e determine se
ele e pal�ndromo ou n�o. Se o n�mero n�o for de quatro d�gitos imprima uma mensagem de erro.*/

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
