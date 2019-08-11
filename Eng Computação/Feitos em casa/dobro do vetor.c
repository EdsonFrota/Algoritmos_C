#include<stdio.h>
#include<stdio.h>

int main(){
    printf("\t##### IMPRIME O DOBRO DOS VALORES INFORMADOS #####\n");
int a, vetor[6], vetor2[6];
for(a=0; a<6;++a){
        printf("[%d]: ", a);
scanf("%d", &vetor[a]);
}
for(a=0; a<6; ++a){
        vetor2[a]= vetor[a]*2;
printf("\t[%d] = %d\n", a, vetor2[a]);
}


system("pause");
}
