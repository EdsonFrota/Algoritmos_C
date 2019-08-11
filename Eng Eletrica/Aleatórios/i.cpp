#include<stdio.h>
int main ()
{
    int i,j, w, k, v1[3], v2[3], v3[3], v4[3], x1=0,x2=0,y1,y2, total=0;
    /*char op;
    printf("B)Conjunto Uniao\nC)Conjunto Interseccao ");
    printf("\nD)Difereca A-B\nE)Diferenca B-A \n");
    printf("F)A e B sao Indenticos\nG)A suconjunto de B\n");

    printf("Digite a opcao desejada: ");
    scanf(" %c",&op);*/


    for(i=0; i<3; i++)
    {
        printf("[%d]: ", i);
        scanf("%d", &v1[i]);
        v3[i]=0;
    }
    for(j=0; j<3; j++)
    {
        printf("[%d]: ",j);
        scanf("%d", &v2[j]);
        v4[j]=0;
    }
     w=0;
     for(i<0;i<3;i++){
        k=0;
        for(j=0;j<3;j++){
            if(v1[i]==v2[j])
                k++;
                // printf("a - b : %d",v2[j]);

        if(k==0)
            v3[w]=v1[i];
             w++;

        }

     }
     for(j=0;j<3;j++){
printf("a - b : %d",v2[i]);
     }
      w=0;
     for(i=0;i<3;i++){
        k=0;
        for(j=0;j<3;j++){
            if(v2[i]==v1[j]) {
                k++;
            }
            if(k==0){
                v3[w]=v2[i];
                w++;
            }
        }
        w=0;
        k=0;
       for(i=0;i<3;i++){
        if(v3[i]!=0){
            w++;
        } }
        if(v4[i]!=0){
            k++;
        }if(k==0 && w==0) {
        printf("A e B sao identicos");
        }else{
            printf("Nao sao identicos");
        }         if(k!=0 && w==0){
            printf("A e subconjunto de B");
         }else{
            printf("Nao e subconjunto");
         }

     }
     return 0;
     }
