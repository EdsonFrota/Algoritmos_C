#include <stdio.h>
#include <stdlib.h>

int main(void){

    int wh = 1;
    int M, i, j, contador, v1, v2, v3, v4, v5, v6, S, D, B[6];
    do{

        printf("Qual tamanho da matriz? ");
        scanf("%d", &M);

        if(M>=3 && M<=100){

            int Ma[M][M];

            // Letra a *******************************************
            printf("a) Insira valores para matriz M %d x %d\n", M, M);

            for(i=0; i<M; i++){
                for(j=0; j<M; j++){
                    printf("Linha %d // Coluna %d ::::::: ", i+1, j+1);
                    scanf("%d", &Ma[i][j]);
                }
            }
            // *********************************************

            // Letra b *******************************************
            printf("Matriz inserida é:\n");
            for(i=0; i<M; i++){
                for(j=0; j<M; j++){
                    printf("%d", Ma[i][j]);
                }
                printf("\n");
            }
            // *********************************************

            // Letra c *******************************************
            for(i=0; i<M; i++){
                for(j=0; j<M; j++){
                    if(i==0 && j==0){
                        v1 = Ma[i][j];
                        v6 = Ma[0][0];
                    }
                    else{
                    // PEGA 3 MENORES NUMEROS
                        if(Ma[i][j] <= v6){
                            v4 = v5;
                            v5 = v6;
                            v6 = Ma[i][j];
                        }
                        else if(Ma[i][j] <= v5){
                            v4 = v5;
                            v5 = Ma[i][j];
                        }
                        else if(Ma[i][j] <= v4){
                            v4 = Ma[i][j];
                        }else{}

                    //********
                    // PEGA 3 MAIORES NUMEROS
                        if(Ma[i][j] >= v1){
                            v3 = v2;
                            v2 = v1;
                            v1 = Ma[i][j];
                        }
                        else if(Ma[i][j] >= v2){
                            v3 = v2;
                            v2 = Ma[i][j];
                        }
                        else if(Ma[i][j] >= v3){
                            v3 = Ma[i][j];
                        }else{}
                    }
                }
            }
            printf("\n%d %d %d %d %d %d", v1,v2,v3,v4,v5,v6);
            // *********************************************

            // Letra d *******************************************
            S = somaMaioresValores(v1,v2,v3);
            printf("\nA soma dos maiores valores: %d", S);
            // *********************************************

            // Letra e *******************************************
            D = diferencaMenoresValores(v4,v5,v6);
            printf("\nA diferenca dos menores valores: %d", D);
            // *********************************************

            // Letra f *******************************************
            printf("\nOs ímpares entre %d e %d: ", D, S);
            for(D=D; D<=S; i++){

                    if(D%2!=0)
                        printf("%d, ", D);
                        D++;

            }
             //printf("\b\b"); AQUI PARA APAGAR ULTIMA VIRGULA
            // *********************************************

            wh = 0;

        }
        else{
            printf("Tamanho inválido!\n\n");
        }

    }while(wh);

}

int somaMaioresValores(int a, int b, int c){
    return a+b;
}

int diferencaMenoresValores(int a, int b, int c){
    return b-c;
}
