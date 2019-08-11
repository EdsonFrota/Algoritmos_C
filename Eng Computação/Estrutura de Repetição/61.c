#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int x, voto;
    int v1=0, v2=0, v3=0, v4=0, vn=0, vb=0;

    do
    {



        printf("\n\tVOTE AGORA: \n\n");
        printf("\t1. Voto no candidato FULANO. \n");
        printf("\t2. Voto no candidato CICLANO. \n");
        printf("\t3. Voto no candidato BELTRANO. \n");
        printf("\t4. Voto no candidato CIPRANO. \n");
        printf("\t5. Voto nulo. \n");
        printf("\t6. Voto em branco. \n");

        printf("\n\nVOTE: ");
        scanf("%d", &voto);

        switch (voto)
        {

        case 1:
            ++v1;
            break;
        case 2:
            ++v2;
            break;
        case 3:
            ++v3;
            break;
        case 4:
            ++v4;
            break;
        case 5:
            ++vn;
            break;
        case 6:
            ++vb;
            break;
        case 0:
            printf("\n\tFIM DE APURAÇÃO DE VOTOS.");
            break;
        default:
            printf("Digite um número válido.");
            break;
        }

    }
    while(voto !=0);

    printf("\n\tCandidato FULANO: %d Votos. ", v1);
    printf("\n\tCandidato CICLANO: %d Votos. ", v2);
    printf("\n\tCandidato BELTRANO: %d Votos. ", v3);
    printf("\n\tCandidato CIPRANO: %d Votos. ", v4);
    printf("\n\tVotos nulos: %d Votos. ", vn);
    printf("\n\tVotos em branco: %d Votos. ", vb);

    if (v1 == v2 && v2 == v3 && v3 == v4 && v4 == v1)
    {
        printf("\n\tEMPATE\n");
    }

    else if (v1 > v2 && v1 > v3 && v1 > v4)
    {
        printf("\n\n\tFULANO CAMPEÃO\n");
    }
    else if(v2 > v1 && v2 > v3 && v2 > v4)
    {
        printf("\n\n\tCICLANO CAMPEÃO\n");
    }
    else if (v3 > v1 && v3 > v2 && v3 > v4)
    {
        printf("\n\n\tBELTRANO CAMPEÃO\n");
    }
    else if(v4 > v3 && v4 > v2 &&  v4 > v1)
    {
        printf("\n\n\tCIPRANO CAMPEÃO\n");

    }

    getch();
    return 0;

    system("pause");

}


