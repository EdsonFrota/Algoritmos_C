#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {

    int a, b, x;

    printf("VALOR A: ");
    scanf("%d", &a);

    printf("VALOR B: ");
    scanf("%d", &b);

    for (x=a; x<=b; x++) {
        printf("%d ", x);
    }

    printf("\n\n\n");
printf("\nIMPARES = ");
    for (x=a; x<=b; x++) {
        if (x%2 != 0) {

            printf("%d ", x);
        }
    }

    printf("\n\n\n");
    printf("IMPARES MULTIPLOS de [3] = ");

    for (x=a; x<=b; x++) {
        if ((x%2 != 0) && (x%3 == 0)) {
            printf("%d ", x);
        }
    }


}


