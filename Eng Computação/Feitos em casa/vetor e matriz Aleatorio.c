#include<stdio.h>
#include<time.h>

/*int main ()
{
    srand(time(NULL));
    int vetor[100], i;

    for (i=0; i<100; ++i)
    {
        vetor[i]=rand()%100+1;
    }
    printf("\nVETOR\n");
    for(i=0; i<100; ++i)
    {
        printf("\t[%d] = %d \n", i, vetor[i]);
    }
    getch();
}
  */
int main () {
 srand(time(NULL));
int matriz[6][6], y, u;
for(y=0; y<6; ++y){
    for(u=0; u<6; ++u){
        matriz[y][u]=rand()%6+1;
    }

}
 printf("\n MATRIZ \n");
for(y=0; y<6; ++y){
    for(u=0; u<6; ++u){
        printf("\t%d %d %d\n", y+1, u, matriz[y][u]);
    }
    printf("\n");
}
getch();
}
