/*10)	 Fazer um programa que:
� leia um n�mero indeterminado de linhas contendo cada uma a idade de um
indiv�duo. A �ltima linha, que n�o entrar� nos c�lculos, cont�m o valor da
idade igual a zero;
� calcule e escreva a idade m�dia deste grupo de indiv�duos.*/
#include<stdio.h>
int main ()
{
    int idade, contador=0;
    float media, soma=0;

    do
    {
        printf("Digite a idade: ");
        scanf("%d",&idade);

        if(idade > 0)
        {
            contador++;
            soma+=idade;
            media = soma/contador;
        }
    }
    while(idade > 0);
    printf("A media de idade do grupo e: %.2f anos", media);
    return 0;
}
