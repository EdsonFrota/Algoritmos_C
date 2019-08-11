#include<stdio.h>
int main ()
{
    int tipo;
    float area, custo_total, custo_final, desconto1, desconto2;
    char nome[100];

    printf("Digite o nome do fazendeiro: ");
    scanf("%s",&nome);
    printf("[1] Ervas Daninhas | [2] Gafanhoto | [3] BROCA | [4] TUDO\n ");
    scanf("%d",&tipo);
    printf("Tamanho da area ser pulverizada (ACRES): ");
    scanf("%f",&area);

    switch(tipo)
    {
    case 1:     //ervas daninhas
        custo_total = area*5.0;
        if (area <= 300.0 && custo_total < 1750.0)
        {
            /*desconto1 = custo_total*0.05;
            custo_final = custo_total - desconto1;*/
            printf("\nO fazendeiro %s pagara pelo sevico de pulverizacao R$%.2f\n",nome, custo_total);
        }
        else if (area <= 300.0 && custo_total > 1750.0)
        {
            desconto2 = custo_total*0.10;
            custo_final = custo_total - desconto2;
            printf("\nO fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n",nome, custo_final);
        }
        else if (custo_total > 1750.0 && area > 300.0)
        {
            desconto1 = custo_total*0.05;
            desconto2 = custo_total*0.10;
            custo_final = custo_total - (desconto1 + desconto2);
            printf("\nO fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n",nome, custo_final);
        }
        break;

    case 2:    //gafanhoto
        custo_total = area*10.0;
        if(area <= 300.0 && custo_total < 1750.0)
        {
            /*desconto1 = custo_total*0.05;
            custo_final = custo_total - desconto1;*/
            printf("O fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n",nome, custo_total);
        }
        else if (area <= 300.0 && custo_total > 1750.0)
        {
            desconto2 = custo_total*0.10;
            custo_final = custo_total - desconto2;
            printf("O fazendeiro %s pagara pelo servico de pulverizacao R$%.2f \n", nome, custo_total);
        }
        else if (custo_total > 1750.0 && area > 300.0)
        {
            desconto1 = custo_total*0.05;
            desconto2 = custo_total*0.10;
            custo_final = custo_total - (desconto1 + desconto2);
            printf("O fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n", nome, custo_final);
        }
        break;

    case 3:    //broca
        custo_total = area*15.0;
        if(area <= 300.0 && custo_total <= 1750.0)
        {
            /*desconto1 = custo_total*0.05;
            custo_final = custo_total - desconto1;*/
            printf("O fazendeiro %s pagara pelo serviço de pulverizacao R$%.2f\n", nome, custo_total);
        }
        else if ( area <= 300.0 && custo_total > 1750.0)
        {
            desconto2 = custo_total*0.10;
            custo_final = custo_total - desconto2;
            printf("O fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n",nome, custo_final);
        }
        else if (custo_total > 1750.0 && area > 300)
        {
            desconto1 = custo_total*0.05;
            desconto2 = custo_total*0.10;
            custo_final = custo_total - (desconto1 + desconto2);
            printf("O fazendeiro %s pagara pelo serviço de pulverizacao R$%.2f\n", nome, custo_final);
        }
        break;

    case 4:   //tudo
        custo_total = area*25.0;
        if (area <= 300.0 && custo_total < 1750.0)
        {
            /*desconto1 = custo_total *0.05;
            custo_final = custo_total - desco<= 300.0 && custo_tonto1;*/
            printf("O fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n",nome,custo_total);
        }
        else if (area <= 300.0 && custo_total > 1750.0)
        {
            desconto2 = custo_total*0.10;
            custo_final = custo_total - desconto2;
            printf("O fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n",nome,custo_final);
        }
        else if (custo_total > 1750.0 && area > 300.0)
        {
            desconto1 = custo_total*0.05;
            desconto2 = custo_total*0.10;
            custo_final = custo_total - (desconto1 + desconto2);
            printf("O fazendeiro %s pagara pelo servico de pulverizacao R$%.2f\n", nome,custo_final);
        }
        break;

    default:
        printf("\nOpcao Invalida!\n");
    }
    return(0);
}
