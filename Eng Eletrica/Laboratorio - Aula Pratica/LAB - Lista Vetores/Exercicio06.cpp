/*6)Fa�a um programa que leia para cada oper�rio: o seu n�mero (inteiro), o n�mero de pe�as fabricadas no
m�s e seu sexo (1 para masculino ou 2 para feminino). Os dados devem ser armazenados em 3
vetores: vetNumOp, vetNumPecas e vetSexo respectivamente. O programa deve calcular os
sal�rios dos funcion�rios, armazen�-los em um quarto vetor (vetSalarios) e mostrar um relat�rio
que contenha o n�mero do oper�rio, a quantidade de pe�as fabricadas no m�s e o seu sal�rio. O
programa deve mostrar tamb�m o total da folha de pagamento da f�brica. */
#include<stdio.h>
int main ()
{
    int i,vetNumOp[15], vetNumPecas[15], vetSexo[15], aux;
    float salario, vetSalarios[15], soma=0;

    printf("Digite o numero do funcionario:\n");
    for(i=0; i<15; i++)
    {

        printf("[%d]: ",i);
        scanf("%d", &vetNumOp[i]);
    }
    printf("Digite o nuemero de pecas fabricada:\n");
    for(i=0; i<15; i++)
    {

        printf("[%d]: ",i);
        scanf("%d",&vetNumPecas[i]);
    }
    printf("Digite o sexo: \n");
    for(i=0; i<15; i++)
    {
        printf("[%d]: ",i);
        scanf("%d", &vetSexo[i]);
    }
    for(i=0;i<15;i++){
    if(vetNumPecas[i] <= 30)
    {
        salario = 622.0;
    }
    else if(vetNumPecas[i] >= 31 && vetNumPecas[i] <=35)
    {
         aux = vetNumPecas[i]- 30;
        salario = (622.0 * 1.03)+aux;
    }
    else if(vetNumPecas[i]> 35)
    {
        aux = vetNumPecas[i]- 30;
        salario = (622.0 * 1.05)+aux;
    }
       soma+=salario;
    printf("\nFuncionario: %d, Pecas Fabricadas: %d, Salario: R$%.2f",vetNumOp[i],vetNumPecas[i], salario);
    }
 printf("\n Folha de pagamento geral: R$%.2f", soma);

return 0;
}
