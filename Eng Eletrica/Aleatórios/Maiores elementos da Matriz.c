#include <stdio.h>
#include <stdlib.h>

int main(){

    int M;
    int wh = 1;

    do{

        printf("Qual tamanho da matriz?\n");
        scanf("%d", &M);

        int A[M][M];
        int i, j, v1, v2, v3, v4, v5, v6;

        if(M>=3 && M<=100){

            for(i=0; i<M; i++){
                for(j=0; j<M; j++){
                    printf("Linha %d // Coluna %d ::::::: ", i+1, j+1);
                    scanf("%d", &A[i][j]);
                }
            }

            printf("\n\n");

            v1 = A[0][0];
            for(i=0; i<M; i++){
                for(j=0; j<M; j++){
                    if(A[i][j] >= v1){
                        v3 = v2;
                        v2 = v1;
                        v1 = A[i][j];
                    }
                    else if(A[i][j] >= v2){
                        v3 = v2;
                        v2 = A[i][j];
                    }
                    else if(A[i][j] >= v3){
                        v3 = A[i][j];
                    }
                }
            }

            printf("v1 = %d\nv2 = %d\nv3 = %d\n", v3, v2, v1);

            wh = 0;
        }else{
            printf("Tamanho informado inválido!\n\n");
        }

    }while(wh);

}
