#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {

setlocale(LC_ALL,"Portuguese");

float peso, altura, imc;

printf("Informe o peso: ");
scanf("%f", &peso);

printf("Informe a altura: ");
scanf("%f", &altura);

imc = peso/(altura*altura);

printf("IMC = %f\n\n", imc);

if (imc < 18.5){
printf("\n\tABAIXO DO PESO!\n\n");

}else
    if (imc >= 18.5 && imc < 25.0){
    printf("\n\tPESO NORMAL!\n\n");

    }else
        if (imc >= 25.0 && imc < 30.0){
        printf("\n\tACIMA DO PESO!\n\n");

        }else
            if(imc > 30.0){
            printf("\n\tOBESO!\n\n");
            }
            system("pause");
}
