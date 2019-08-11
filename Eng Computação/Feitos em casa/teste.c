#include<stdio.h>
#include<locale.h>

int main ()  {
    setlocale(LC_ALL, "");


    int fatorial, resposta;


    printf("Digite o número que deseja calcular o fatorial:");
    scanf("%d", &fatorial);

     resposta = 1;

for ( ; fatorial >= 1; --fatorial){
    resposta *=fatorial;


}
    printf("\n\n\tRESPOSTA = %d\n", resposta);


return 0;
}
