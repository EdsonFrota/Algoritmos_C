/*16. Desenvolver um algoritmo para ler nomes, idades e pesos de três pessoas e
calcular e imprimir idade e o peso médio das três pessoas.*/

#include<stdio.h>
int main ()
{
    char nome1[20], nome2[20], nome3[20];
    int idade1, idade2, idade3, imedia;
    float peso1, peso2, peso3, pmedio;
    printf("# Dados da 1a pessoa #\n");
    printf("Digite o nome: ");
    scanf("%s", &nome1);
    printf("Digite a idade: ");
    scanf("%d", &idade1);
    printf("Digite o peso: ");
    scanf("%f", &peso1);

    printf("\n# Dados da 2a pessoa #\n");
    printf("Digite o nome: ");
    scanf("%s", &nome2);
    printf("Digite a idade: ");
    scanf("%d",&idade2);
    printf("Digite o peso: ");
    scanf("%f", &peso2);

    printf("\n# Dados da 3a pessoa #\n");
    printf("Digite o nome: ");
    scanf("%s", &nome3);
    printf("Digite a idade: ");
    scanf("%d", &idade3);
    printf("Digite o peso: ");
    scanf("%f", &peso3);

    imedia=(idade1+idade2+idade3)/3;
    pmedio=(peso1+peso2+peso3)/3;
    printf("A idade media do grupo e: %d anos, e o peso media e: %.2f", imedia, pmedio);
    return 0;
}
