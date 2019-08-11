/*4. Um comerciante comprou um produto e quer vende-lo com um lucro de 45% se o valor da
compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o valor do
produto e imprimir o valor da venda. */

#include<stdio.h>
#include<locale.h>
int main ()

{
    setlocale(LC_ALL, "Portuguese");
    float preco, lucro;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    if (preco < 20.00)
    {
        lucro=(preco*0.45)+preco;
        printf("O valor da venda será de %.2f",lucro);
    }
    else
    {
        if (preco >= 20.00)
        {
            lucro=(preco*0.30)+preco;
            printf("O valor da venda será de %.2f",lucro);
        }

    }
    return 0;
}
