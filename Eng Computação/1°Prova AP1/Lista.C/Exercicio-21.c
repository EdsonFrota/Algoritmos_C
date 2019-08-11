#include<stdio.h>
#include<locale.h>
main () {
 setlocale(LC_ALL, "Portuguese");

 int idade;

    printf("Informe a idade do eleitor:");
    scanf("%d", &idade);

    if (idade >= 16 && idade <=17){
        printf("FACULTATIVO\n");
    }
            else
               if (idade >= 18 && idade <= 65){
               printf("\n\tOBRIGATÓRIO\n");
               }
               else{
               printf("\n\tDISPENSADO\n");
               }
        system("pause");

}
