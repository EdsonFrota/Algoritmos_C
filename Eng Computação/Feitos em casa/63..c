#include <stdio.h>
#include <stdlib.h>

int main()
{
	int impar, par, nun, x;

	impar=0;
	par=0;

	for(x=1; x<=10; x++){
		printf("\nNumero %d : ", x);
		scanf("%d", &nun);

		if(nun %2 == 0){
			par++;
		} else {
			impar++;
		}
	}

	printf("\nPar: %d", par);
	printf("\nImpar: %d", impar);

	system("PAUSE");
	return 0;
}
