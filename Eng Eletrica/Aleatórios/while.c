#include<stdio.h>#include<locale.h>

int main ()

{   setlocale(LC_ALL, "Portuguese");
    int pacoca=0;
    while(pacoca!=100)
    {
        ++pacoca;
        printf("\n[%i] - pa�o�a",pacoca);
    }
    return (0);
}
