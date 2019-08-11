#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

main() {

    setlocale(LC_ALL, "");

    int x, v;
    int v1=0, v2=0, v3=0, v4=0, vn=0, vb=0;

    do {

        system("cls");

        printf("Legenda: \n\n");
        printf("\t[1]. Voto no candidato 1. \n");
        printf("\t[2]. Voto no candidato 2. \n");
        printf("\t[3]. Voto no candidato 3. \n");
        printf("\t[4]. Voto no candidato 4. \n");
        printf("\t[5]. Voto nulo. \n");
        printf("\t[6]. Voto em branco. \n");

        printf("\n\nInsira seu voto: ");
        scanf("%d", &v);

        switch (v) {

            case 1: v1++;   break;
            case 2: v2++;   break;
            case 3: v3++;   break;
            case 4: v4++;   break;
            case 5: vn++;   break;
            case 6: vb++;   break;
            case 0:     printf("[...]");    break;
            default:    printf("404.");     break;
        }

    } while(v!=0);

    printf("\nCandidato 1: %d votos. ", v1);
    printf("\nCandidato 2: %d votos. ", v2);
    printf("\nCandidato 3: %d votos. ", v3);
    printf("\nCandidato 4: %d votos. ", v4);
    printf("\nVotos nulos: %d votos. ", vn);
    printf("\nVotos em branco: %d votos. ", vb);



}


