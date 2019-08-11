#include<stdio.h>
#include<locale.h>
	int main ()
	{
	    setlocale(LC_ALL, "Portuguese");
	    int e, soma, x, y, vetor[12];

	    for (e=0; e<12; ++e)
	    {
	        printf(" POSI플O [%d]: ", e);
	        scanf("%d", &vetor[e]);
	    }
	    printf("\n\tPOSI플O [X]: ");
	    scanf("%d", &x);

	    printf("\n\tPOSI플O [Y]: ");
	    scanf("%d", &y);

	    printf("\n VALORES DAS RESPECTIVAS POSI합ES %d e %d\n", vetor[x], vetor[y]);

	    soma = (vetor[x] + vetor[y]);

	    printf("\n\n\tSOMA = %d\n\n", soma);

	    getch();
	    return 0;
	    system("pause");
	}
