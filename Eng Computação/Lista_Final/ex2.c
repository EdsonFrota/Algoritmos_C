#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {

    setlocale(LC_ALL, "");

    int x;

    for (x=1; x<=500; x++) {
        printf("%d ");
    }


}
