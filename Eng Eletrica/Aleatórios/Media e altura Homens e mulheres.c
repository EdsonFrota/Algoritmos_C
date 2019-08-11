#include<stdio.h>
#include<stdlib.h>

#define Qtde 3 // mude isso pra 15 depois, 3 eh so pra testar o programa mais rapido
int main ()
{
    float altura, menor=3,soma=0,maior=0, media=0;
    char sexo, sexo_Mais_Alta;
    int mulheres=0, homens=0,i;

    for(i=0; i<Qtde; i++)
    {

        printf("\n\t Pessoa %d >> \n\n\t\t Altura: ",i+1);
        scanf("%f",&altura);
        printf("\n\t\t Sexo: M ou F?: ");
        scanf("%s",&sexo);

        if ( sexo == 'M')
        {
            homens++;
        }

        else if(sexo == 'F')
        {
            mulheres++;
            soma= soma + altura;
            media = soma/mulheres;
        }

        else
        {
            printf("\n\tSabe Ler nao Muleke? Eh pra Digitar M ou F !Affzz Vai aew tenta de novo! !\n");

        }

        if(altura > maior)
        {
            sexo_Mais_Alta = sexo;
            maior = altura;
        }

        if(altura < menor)
            menor = altura;

    }
    printf("\n\n\t -------------------- RESULTADOS ----------------\n\n");
    printf(" \tMenor altura do grupo >> %.2f", menor);
    printf(" \n\n\tMedia das alturas das mulheres >> %.2f", media);
    printf(" \n\n\tNumero de homens >> %d", homens);
    printf(" \n\n\tO sexo da pessoa mais alta >> %c \n\n\n",sexo_Mais_Alta);

    system("pause");
    return 0;
}
