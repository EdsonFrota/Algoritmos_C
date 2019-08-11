/*5) Desenvolver	um	programa	que	leia	a	altura	e	o	sexo(M	ou	F)	de	15
pessoas.	Este	deverá	calcular	e	mostrar:
a. A menor	altura	do	grupo;
b. A	média	de	altura	das	mulheres;
c. A	quantidade	de	homens;
d. O	sexo	da	pessoa	mais	alta.*/

#include<stdio.h>
int main ()
{
    int feminino=0, masculino=0, indice;
    float altura, soma, media, altura_maior=0, altura_menor=15;
    char sexo,alto;

    for(indice=0; indice<15; indice++)
    {
        printf("\nSexo da pessoa %d: ",indice+1);
        scanf(" %c",&sexo);

        printf("Digite a altura: ");
        scanf("%f",&altura);

        if (sexo == 'm' || sexo == 'M')
        {
            masculino++;
        }
        else if (sexo == 'f' || sexo == 'F')
        {
            feminino++;
            soma+=altura;
            media = soma/feminino;
        }
        else
        {
            printf("Sexo invalido.");
        }
        if (altura > altura_maior)
        {
            alto = sexo;
            altura_maior = altura;
        }
        if (altura < altura_menor)
        {

            altura_menor = altura;
        }
    }

    printf("\na. Menor Altura do grupo:%.2f\n",altura_menor);
    printf("b. Media altura mulheres:%.2f\n",media);
    printf("c. Numero de homens :%d\n",masculino);
    printf("d. O sexo da pessoa mais alta e: %c\n",alto);

    return 0;
}
