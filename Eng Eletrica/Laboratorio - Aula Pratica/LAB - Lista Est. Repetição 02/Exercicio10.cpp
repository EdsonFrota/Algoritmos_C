/*10)	 Fazer um programa que:
• leia um número indeterminado de linhas contendo cada uma a idade de um
indivíduo. A última linha, que não entrará nos cálculos, contém o valor da
idade igual a zero;
• calcule e escreva a idade média deste grupo de indivíduos.*/
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
