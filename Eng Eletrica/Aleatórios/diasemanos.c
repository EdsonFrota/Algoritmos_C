#include<stdio.h>
int main ()
{
    int dias, meses, anos;
    scanf("%d", &dias);
    anos=(dias - dias%365)/365;
    dias = (dias%365);
    meses = (dias - dias%30)/30;
    dias=dias%30;
    printf("%d anos, %d meses %d dias",anos, meses,dias);
    return(0);
}
