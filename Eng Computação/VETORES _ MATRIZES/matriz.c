#include<stdio.h>

int main(){
int a, b, m[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
for(a=0; a<3; ++a){
    for(b=0;b<3; ++b){
        printf("%d ", m[a][b]);
    }
    printf("\n");
}

}
