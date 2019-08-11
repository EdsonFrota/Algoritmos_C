#include<stdio.h>
int main(){
int M = 3;
 int i, j, v1, v2, v3, v4, v5, v6;
 int Ma[M][M];
 for(i=0;i<M;i++){
    for(j=0;j<M;j++){
        scanf("%d",&Ma[i][j]);
    }
 }
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
                            printf("%d",v6);
                        }
                        else if(Ma[i][j] <= v5){
                            v4 = v5;
                            v5 = Ma[i][j];
                            printf("%d",v5);
                        }
                        else if(Ma[i][j] <= v4){
                            v4 = Ma[i][j];
                            printf("%d",v4);
                        }else{}
}
                }
}
}
