//6	- Desenvolver um programa para ler nomes, idades e pesos de	três
//pessoas e	calcular e imprimir	idade e o peso médio das três pessoas.

#include<stdio.h>
int main()
{
    char nome1[20], nome2[20], nome3[20];
    float idade1, peso1,idade2, peso2, idade3, peso3, pMedio, iMedia;
    printf("Digite o nome da 1a pessoa: ");
    scanf("%s", &nome1);
    printf("Digite a idade: ");
    scanf("%f", &idade1);
    printf("Digite o peso: ");
    scanf("%f", &peso1);
    printf("\nDigite o nome da 2a pessoa: ");
    scanf("%s", &nome2);
    printf("Digite a idade: ");
    scanf("%f", &idade2);
    printf("Digite o peso: ");
    scanf("%f", &peso2);
    printf("\nDigite o nome da 3a pessoa: ");
    scanf("%s", &nome3);
    printf("Digite a idade: ");
    scanf("%f", &idade3);
    printf("Digite o peso: ");
    scanf("%f", &peso3);
    iMedia = (idade1+idade2+idade3)/3;
    pMedio = (peso1+peso2+peso3)/3;
    printf("\n%s : %.0f anos, %.2f kg\n", nome1,idade1,peso1);
    printf("%s : %0.f anos, %.2f kg\n", nome2,idade2,peso2);
    printf("%s : %0.f anos, %.2f kg", nome3,idade3,peso3);
    printf("\nA idade media das pessoas sao: %.0f e o peso medio e: %.3f\n", iMedia, pMedio);
    return 0;
}
