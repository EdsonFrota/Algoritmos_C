/*8) A	companhia	ABC-LOC	deseja	contrair	um	empréstimo	no	Banco	Mercantil	de	 Fomento.
Para	 tanto	 deseja	 calcular	 quantos	 anos	 seriam	 necessários	 para	 o	 pagamento	 do
empréstimo	sabendo	que	o	banco	cobra	3,5%	de	juros	ao	mês	para	os	primeiros	12	meses	de
divida	 e	 4,2%	 ao	mês	 para	 os	meses	 subseqüentes.	 A	 companhia	 deseja	 fazer	 pagamentos
mensais	 fixos	 no	 valor	 de	 10%	 da	 dívida	 inicial,	 mensalmente.	 Fazer	 um	 programa que
calcule	quantos	anos	serão	necessários	para	o	pagamento	total	da	dívida.	*/
#include<stdio.h>
int main ()
{
    int meses=1;
    float emprestimo, saldo, ano;

    printf("Digite o valor do emprestimo: ");
    scanf("%f",&emprestimo);

    saldo = emprestimo;

    while(saldo > 0.0)
    {
        saldo = saldo -(emprestimo*0.1);

        if(meses<12)
        {
            saldo+= emprestimo * 0.035;
        }
        else
        {
            saldo+=emprestimo*0.042;
        }
        meses++;
    }
    ano = meses/12.0;
    printf("\n Sera necessario %.1f anos para o pagamento total da divida.",ano);

    return 0;
}
