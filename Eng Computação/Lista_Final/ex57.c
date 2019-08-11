#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


float fatorial (int z)
{

    int x, fat=1;

    for (x=1; x<=z; x++)
    {
        fat *= x;
    }

    return fat;


}

main()
{

    setlocale(LC_ALL, "");

    int x, n, z = 2;
    int sinal = -1;
    float v;
    float a, b, c;
    float resultado = 0;

    printf("Informe o valor da variável: ");
    scanf("%f", &v);

    for (x=0; x<20; x++)
    {

        a = pow(v, z);
        b = fatorial(z);

        c = (a/b) * sinal;

        resultado += c;
        printf("A: %.2f B: %.2f C: %.2f Resultado: %.3f\n", a, b, c, resultado);

        z = z+2;
        sinal = sinal * -1;

        getch();
        return 0;
        system("pause");



    }

    resultado = 1 + resultado;
    printf("\nO valor do número de euler elevado a %.1f é: %.3f", v, resultado);


}


