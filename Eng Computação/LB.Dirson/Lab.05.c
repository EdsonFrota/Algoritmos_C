#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
main() {
 
    setlocale(LC_ALL, "");
 
    float preco, add, precoAdd, imposto, precoCusto, precoNovo, precoFim, desconto;
    char tipo, refrig;
 
    printf("Tipos de produto: \n");
    printf("\n\t[A]: Alimenta��o \n\t[L]: Limpeza \n\t[V]: Vestu�rio");
    printf("\n\nQual o produto? ");
    scanf(" %c", &tipo);
 
    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);
 
    printf("Necessida de refrigera��o? [S p/ Sim] ou [N p/ N�o]: ");
    scanf(" %c", &refrig);
 
 
    //CALCULO VALOR ADICIONAL
    switch (refrig) {
 
        case 'N': {
 
            if (tipo == 'A') {
                if (preco < 15) add = 2;
                else add = 5; }
 
                else
                if (tipo == 'L') {
                    if (preco < 10) add = +1.5;
                    else add = 2.5; }
 
                    else
                    if (tipo == 'V') {
                        if (preco < 30) add = 3;
                        else add = 2.5; }
 
                } break;
 
 
        case 'S': {
 
            if (tipo == 'A') add = 8;
 
                else
                if (tipo == 'L') add = 5;
 
                    else
                    if (tipo == 'V') add = 3;
 
                    } break;
 
        default:
            printf("Regrigera��o informada incorreta.");
 
    }
 
    printf("\nValor do pre�o adicional R$%.2f.", add);
    //FIM CALCULO VALOR ADICIONAL
 
    //CALCULO DO IMPOSTO
    if (preco < 25) {
        imposto = preco * 0.05;
    } else {
        imposto = preco * 0.08;
    }
 
    printf("\nO imposto sobre o produto � de R$%.2f", imposto);
    //FIM CALCULO IMPOSTO
 
    //CALCULO PRE�O CUSTO
    precoCusto = preco+imposto;
    printf("\nO pre�o de custo (inicial+imposto) � de R$%.2f", precoCusto);
    //FIM CALCULO PRE�O CUSTO
 
    //CALCULO NOVO PRE�O = PRE�O CUSTO + ADD
    precoNovo = precoCusto + add;
 
    if ((tipo == 'A') && (refrig == 'S')) {
        desconto = 0;
        precoFim = precoNovo - desconto;
    } else {
        desconto = precoNovo * 0.03;
        precoFim = precoNovo - desconto; }
 
    printf("\n\n\tPre�o inicial: %.2f \n\tImposto: %.2f  \n\tPreco de Custo: %.2f \n\tAdicional: %.2f \n\tPreco atualizado %.2f  \n\tDesconto: %.2f\n\n", preco, imposto, precoCusto, add, precoNovo, desconto);
    printf("\nO valor final do produto � de R$%.2f", precoFim);
    ///FIM CALCULO NOVO PRE�O = PRE�O CUSTO + ADD
 
    //CLASSIFICACAO
    if (precoNovo <= 50) {
         printf("\nO produto � classificado como [Barato]");
    } else
        if ((precoNovo > 50) && (precoNovo <= 100)) {
             printf("\nO produto � classificado como [Normal]");
        } else
            if (precoNovo > 100) {
                 printf("\nO produto � classificado como [Barato]");
            }
    //FIM CLASSIFICACAO
 
    printf("\n\n");
    system("pause");
 
}
