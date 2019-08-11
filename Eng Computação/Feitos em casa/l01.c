#include<stdio.h>
#include<locale.h>
	int main (void)
	{
	    setlocale(LC_ALL, "Portuguese");
	    int e, soma, x, y, vetor[12];

	    for (e=0; e<12; ++e)
	    {
	        printf(" ", e);
	        scanf("%d", &vetor[e]);
	    }
	    printf("\n\t [X]: ");
	    scanf("%d", &x);

	    printf("\n\t [Y]: ");
	    scanf("%d", &y);

	    printf("\n\tPOSIÇÕES %d e %d\n", vetor[x], vetor[y]);

	    soma = (vetor[x]+ vetor[y]);

	    printf("\n\n\tSOMA = %d\n\n", soma);

	    getch();
	    system("pause");
	    return 0;

	}
