#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

    int eds, on;

    printf("\t # TABUADA #\n\n");
    for (eds=1; eds<=10; ++eds) {
        for (on=1; on<=10; ++on) {

            printf("%2d x %2d = %2d\n", eds, on, eds*on);
        }
        printf("\n");
    }
    getch();
    return 0;

    system("pause");

}



