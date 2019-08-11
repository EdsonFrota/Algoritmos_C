#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

main()
{

    setlocale(LC_ALL, "");

    int x;
    char sexo[200];
    int idade[200];
    int homem=0, mulher=0;

    for (x=0; x<200; x++)
    {

        printf("\t[F ou f = FEMININO]  [M ou m = MASCULINO]\n");
        printf("Informe o sexo: ");
        scanf(" %c", &sexo[x]);

        printf("Informe a idade: ");
        scanf("%d", &idade[x]);

    }

    for (x=0; x<200; x++)
    {

        if ((sexo[x] == 'm' || 'M') && (idade[x] >=60))
        {
            ++homem;
        }

        if ((sexo[x] == 'f' || 'F') && (idade[x] >=60))
        {
            ++mulher;
        }
    }

    printf("%d Homens maiores de idades.", homem);
    printf("\n%dMulheres maiores de idade.", mulher);

    getch();
    return 0;
    system("pause");

}
