#include<stdio.h>
int main(){
	int mat[4][4], l,c,l1,c1, vet[8], id, k, flag;
	id=0;
	printf("\n Entre com a Matriz 4x4:\n");

	for(l=0;l<4;l++)
		for(c=0;c<4;c++)
			scanf("%d",&mat[l][c]);

	//Os pemeiros dois fors selecionam cada elemento da matriz
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){

			//os segundos dois fors comparam aquele elemento selecionado com todos os outros a partir dele
			for(l1=l;l1<4;l1++){
				for(c1=0;c1<4;c1++){
					//se o elemento sendo comparado for igual àquele selecionado, desde que não seja a mesma célula da matriz
					if((mat[l][c] == mat[l1][c1]) && (c!=c1 || l!=l1)){
						//verifica em um vetor que está guardando todos os repetidos, se ele já não foi encontrado antes
						flag = 1;
						printf("%d - ",mat[l][c]);
						for(k=0;k<id;k++)
							if(vet[k]==mat[l1][c1]) flag = 0;

						//caso não esteja no vetor ainda, coloca ele lá
						if(flag==1){
							vet[id] = mat[l1][c1];
							id++;
						}
					}
				}
			}
		}
	}

	//imprime o vetor que guarda os elementos repetidos
	printf("\n Os repetidos sao: ");
	for(k=0; k<id; k++) printf(" %d ",vet[k]);
	return 0;
}
