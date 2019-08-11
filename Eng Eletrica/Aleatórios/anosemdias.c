#include<stdio.h>
int main ()
{
    int anos,meses, dias,verifica_Anos,verifica_meses,x;
    printf("Qual sua idade: ");
    scanf("%d", &anos);
    printf("Quantos meses vc tem: ");
    scanf("%d", &meses);
    printf("Digite quantos dias voce tem: ");
    scanf("%d", &dias);
    verifica_Anos = anos*365;
    verifica_meses = meses*30;
    x= verifica_Anos+verifica_meses+dias;
    printf("%d dias",x);
    return (0);
}
