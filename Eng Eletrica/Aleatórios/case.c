#include<stdio.h>

int main ()
{
    char canal;
    printf("Digite o canal de sua preferencia: ");
    scanf("%c",&canal);
    switch(canal)
    {
    case 's':
    case 'S':
        printf("SBT");
        //break;

    default:
        printf("ERROU !");
    }
}
