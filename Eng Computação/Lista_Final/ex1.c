#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {

    setlocale(LC_ALL, "");

    int x;
    char nome[] = "Victor";

    for (x=0; x<1000; x++) {
        printf(nome);
    }


}
