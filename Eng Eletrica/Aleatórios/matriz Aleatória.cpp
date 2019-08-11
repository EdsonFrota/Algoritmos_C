#include<stdio.h>
#include<stdlib.h>#include<time.h>
int main (){
int m[100][100], i, j;
for(i=0;i<99;i++){
    for(j=0;j<99;j++){
           m[i][j]=rand();
    }
}
for(i=0;i<99;i++){
    for(j=0;j<99;j++){
        printf("\nElemento [%d][%d] da matriz = %d", i, j,m[i][j]);
    }
}
return 0;
}
