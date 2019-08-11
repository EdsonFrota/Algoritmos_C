#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int codigo;
    float n1, n2, n3, p;


    do
    {


        printf("\n\nCódigo do aluno: ");
        scanf("%d", &codigo);

        if (codigo < 0)
        {
            printf("ALUNO INEXISTENTE");
        }

        else
        {

            printf("Nota 1= ");
            scanf("%f", &n1);

            printf("Nota 2= ");
            scanf("%f", &n2);

            printf("Nota 3= ");
            scanf("%f", &n3);

            if ((n1 > n2) && (n1 > n3))
            {
                n1 = n1*4;
                n2 = n2*3;
                n3 = n3*3;

                p = (n1+n2+n3)/10;
            }
            else if ((n2 > n1) && (n2 > n3))
            {
                n2 = n2*4;
                n1 = n1*3;
                n3 = n3*3;

                p = (n1+n2+n3)/10;
            }
            else if ((n3 > n2) && (n3 > n1))
            {
                n3 = n3*4;
                n1 = n1*3;
                n2 = n2*3;

                p = (n1+n2+n3)/10;
            }


            printf("\n\tALUNO N°: %d\n", codigo);
            printf("\n\tNota 1 com peso = %.1f\n", n1);
            printf("\n\tNota 2 com peso = %.1f\n", n2);
            printf("\n\tNota 3 com peso = %.1f\n", n3);
            printf("\n\tMÉDIA PONDERADA: %.1f", p);

            if (p >= 6)
            {
                printf("\n\nAPROVADO. ");
            }
            else
            {
                printf("\n\nREPROVADO. ");
            }


        }

    }
    while(codigo > 0);

    getch();
    return 0;

    system("pause");


}


