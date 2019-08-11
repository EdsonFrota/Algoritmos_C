/*11. O coração humano bate em média uma vez por segundo. Desenvolver um
algoritmo para calcular e escrever quantas vezes o coração de uma pessoa
baterá se viver X anos. Considerações: 1 ano = 365 dias, 1 dia = 24 horas, 1
hora = 60 minutos e 1 minuto = 60 segundos.*/

#include<stdio.h>
int main ()
{
    int idade,batimento;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    batimento=((((365*idade)*24)*60)*60);
    printf("Seu coracao batera %d vezes em %d anos.",batimento,idade);
    return 0;
}
