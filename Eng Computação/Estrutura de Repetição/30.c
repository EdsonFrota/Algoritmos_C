#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    char c1 [200], c2[200], c3[200];
    int op, qtd=0, v1=0, v2=0, v3=0, v4=0;
    float p1, p2, p3;

    printf("CANDIDATO 1: ");
    scanf(" %s", &c1);

    printf("CANDIDATO 2: ");
    scanf(" %s", &c2);

    printf("CANDIDATO 3: ");
    scanf(" %s", &c3);

    do
    {

        printf("\n\t# CANDIDATOS # \n\n");
        printf("\t1. Votar em %s \n", c1);
        printf("\t2. Votar em %s \n", c2);
        printf("\t3. Votar em %s \n", c3);
        printf("\t4. Votar Branco \n");

        printf("\n\t5. RESULTADOS APURADOS. \n");
        printf("\nVOTE JA: ");
        scanf("%d", &op);

        if (op != 5) ++qtd;

        switch (op)
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
        default:
            printf("CANDIDATO INEXISTENTE. ");
            break;


        }

    }
    while (op != 5);

    p1 = (float)v1 / qtd;
    p2 = (float)v2 / qtd;
    p3 = (float)v3 / qtd;

    printf("\n\n");
    printf("CANDIDATO \t VOTOS \t\t %%\n");
    printf("%s \t\t %d \t\t %.3f\n", c1, v1, p1);
    printf("%s \t\t %d \t\t %.3f\n", c2, v2, p2);
    printf("%s \t\t %d \t\t %.3f\n", c3, v3, p3);
    printf("BRACO            %d", v4);

    printf("\n\n");

    if ((v1 > v2) & (v1 > v3))
    {
        printf("CANDIDATO %s FOI O GANHADOR. \n", c1);
    }
    else if ((v2 > v1) & (v2 > v3))
    {
        printf("CANDIDATO %s FOI O GANHADOR. \n", c2);
    }
    else if ((v3 > v1) & (v3 > v2))
    {
        printf("CANDIDATO %s FOI O GANHADOR. \n", c3);
    }

    getch();
    return 0;
    system("pause");

}
