#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>



float fatorial (float termoB, int aux)
{

    int y;

    for (y=aux; y>=1; --y)
    {
        termoB *= y;
    }

    return termoB;

}

void resolverCosseno(int x, int n, float a, float b, float c, float termoB)
{

    int var, expoent, aux;
    float cos=0;

    printf("Informe o valor da variavel: ");
    scanf("%d", &var);

    for (x=1; x<=n; ++x)
    {

        a = pow(-1, x);

        aux = 2*x;
        b = fatorial(termoB, aux);

        expoent = (2*x);
        c = pow(var, expoent);

        cos += (a/b) * c;

    }

    printf("O cosseno de %d é %.2f", var, cos);

}

void resolverSeno(int x, int n, float a, float b, float c, float termoB)
{

    int var, expoent, aux;
    float sin = 0;

    printf("Informe o valor da variavel: ");
    scanf("%d", &var);

    for (x=1; x<=n; ++x)
    {

        a = pow(-1, x);

        aux = (2*x) + 1;
        b = fatorial(termoB, aux);

        expoent = (2*x) + 1;
        c = pow(var, expoent);

        sin += (a/b) * c;

    }

    printf("O seno de %d é %.2f", var, sin);

}

void resolverExp(int x, int n, float a, float b, float termoB)
{

    int var, expoent, aux;
    float expon = 0;

    printf("Informe o valor da variavel: ");
    scanf("%d", &var);

    for (x=1; x<=n; ++x)
    {

        a = pow(var, x);

        aux = x;
        b = fatorial(termoB, aux);

        expon += a/b;

    }

    printf("O exponencial de %d é %.2f", var, expon);

}

main()
{

    setlocale(LC_ALL, "");

    int op, x, n;

    float a, b, c, termoB=1;

    printf("Opções: \n");
    printf("\t1. Cosseno de X. \n");
    printf("\t2. Seno de X. \n");
    printf("\t3. Função exponencial e^x. \n");

    printf("\n\nInforme a opção desejada: ");
    scanf("%d", &op);

    printf("Total de termos: ");
    scanf("%d", &n);

    switch (op)
    {

    case 1:
        resolverCosseno(x, n, a, b, c, termoB);
        break;
    case 2:
        resolverSeno(x, n, a, b, c, termoB);
        break;
    case 3:
        resolverExp(x, n, a, b, termoB);
        break;
    default:
        printf("ERRO!");

    }

    getch();
    return 0;

    system("pause");
}


