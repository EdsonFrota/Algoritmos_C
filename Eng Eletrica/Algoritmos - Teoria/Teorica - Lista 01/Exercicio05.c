/*5. Segundo uma tabela médica, o peso ideal está relacionado com a altura e o sexo. Fazer um
algoritmo que receba a altura e o sexo de uma pessoa, calcular e imprimir o seu peso ideal,
utilizando as seguintes fórmulas:
Para homens: (72.7 * Altura) - 58
Para mulheres: (62.1 * Altura) - 44.7 */

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "");
    char sexo;
    float altura, peso1, peso2;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite o sexo [F] ou [M]: ");
    scanf("%s", &sexo);
    if(sexo == 'M'|| sexo == 'm')
    {
        peso1=((72.7 * altura)-58);
        printf("Sexo MASCULINO. O peso ideal é: %.2f.",peso1);
    }
    else

    {
        peso2=((62.1 * altura)-44.7);
        printf("Sexo FEMININO. O peso ideal é %.2f.",peso2);
    }

    return 0;
}


