#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {

    setlocale(LC_ALL, "");

    int x;

    for (x=0; x<=200; x++) {
        if (x%2 == 0) {
            printf("%d\n", x);
        }
    }


}
