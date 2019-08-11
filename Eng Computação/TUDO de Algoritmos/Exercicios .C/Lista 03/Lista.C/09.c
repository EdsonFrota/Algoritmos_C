#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main () {
	 setlocale(LC_ALL, "Portuguese");
int
c;
printf("escolha seu codigo\n\n\n");
printf("[1]escriturário,[2]secretário,[3]caixa,[4]gerente,[5]diretor\n");
scanf("%d",&c);
if (c==1){
printf("o cargo de escriturário recebera um aumento de 50 porcento\n");
}
else if (c==2){printf("o cargo de secretária recebra um aumento de 35 porcento\n");}
else if(c==3) {printf ("o cargo de caixa recebera um aumento de 20 porcento\n");
}
else if(c==4) {printf("o cargo de gerente recebera um aumento de 10 porcento\n");
}
else if (c==5){printf(" o cargo de diretor recebera um aumento de 0 porcento\n");
}
system("pause");

}


