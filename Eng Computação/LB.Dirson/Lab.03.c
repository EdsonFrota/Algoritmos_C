#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {

	setlocale(LC_ALL, "Portuguese");

	char letra;

	printf("Digite a Letra:");
	scanf("%c", &letra);

	switch (letra){
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
		case'a':
        case'e':
        case'i':
        case'o':
        case'u':
		printf("\n\tVOGAL\n\n");
		break;

		default:
			printf("\n\tCONSOANTE\n\n");
	}

	system("pause");


	}
