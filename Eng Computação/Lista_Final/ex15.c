#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int x, n,i;
    srand(time(NULL));
    x = 1 + (rand() % 100);

    printf("Geramos um numero para voce adivinhar! \n\n");

    for(i = 1; i > 0; i++){
        printf("Informe o numero: ");
        scanf("%d", &n);

        if(n > x)
            printf("O numero informado e maior do que o sorteado!\nTente novamente.\n\n");
        else if(n < x)
            printf("O numero informado e menor do que o sorteado!\nTente novamente.\n\n");
        else{
            printf("Parabens voce adivinhou o numero em %d tentivas!", i);
            i = -1;
            }
    }
}
