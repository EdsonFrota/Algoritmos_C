/*9)Um	 determinado	 material	 radioativo	 perde	 metade	 de	 sua	 massa	 a	 cada	 50	 segundos.
Dada	a	massa	inicial,	em	gramas,	fazer	um	programa que	determine	o	tempo	necessário	para
que	essa	massa	se	torne	menor	do	que	0,5	gramas.	Escreva	a	massa	inicial,	a	massa	final	e	o
tempo	calculado	em	horas,	minutos	e	segundos.*/
#include<stdio.h>
int main ()
{
    int tempo=0, hora, minutos, segundos;
    float massa_inicial, massa_final;

    printf("Digite a massa inicial: ");
    scanf("%f",&massa_inicial);

    massa_final = massa_inicial;

    while(massa_final >= 0.50)
    {
        massa_final/=2;
        tempo+=50;
    }

    hora = tempo/3600;
    minutos = (tempo%3600)/60;
    segundos = (tempo%3600)%60;

    printf("Massa inicial: %f\nMassa Final: %f\n",massa_inicial,massa_final);
    printf("O tempo necessario sera de %dh : %dm : %ds",hora,minutos,segundos);
    return 0;
}
