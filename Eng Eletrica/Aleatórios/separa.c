#include<stdio.h>
int main ()
{
    int numero, unidade, dezena, centena,milhar;
        printf("Digite um numero: ");
        scanf("%d", &numero);
            unidade=(numero%100)%10;
            dezena=(numero%100)/10;
            centena=(numero/100)%10;
            milhar=(numero/1000)%100;
        printf("unidade = %d \n",unidade);
        printf("dezena = %d \n",dezena);
        printf("centena = %d \n",centena);
         printf("milhar = %d \n",milhar);
getch();
return 0;
}
