/*7) Fa�a	um		programa	para	determinar	se	uma	sequ�ncia	de	n n�meros
digitados	pelo	usu�rio	est�	ou	n�o	ordenada.	*/

#include<stdio.h>
int main ()
{
    int indice=1, n, valores=0, cont, confirma=0;
    printf("Digite o numero de termos da sequencia: ");
    scanf("%d",&n);

    do
    {
        cont=valores;
        printf("Informe o termo da sequencia : ");
        scanf("%d", &valores);

        if (cont > valores)
        {
            confirma++;
        }
        indice++ ;
    }
    while(indice <= n);

    if (confirma== 0)
    {
        printf("A sequecia esta Ordenada.");
    }
    else
    {
        printf("A sequencia esta Desordenada.");
    }

    return 0;
}
