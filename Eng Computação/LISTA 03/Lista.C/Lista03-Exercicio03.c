#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{setlocale(LC_ALL, "Portuguese");

	int N1, N2, N3;
printf("Digite 3 números:");
scanf("%d %d %d", &N1, &N2, &N3);

if ((N1 > N2&& N3 > N2))
{
	printf(" O menor numero é %d",N2);
}
else if (N2 > N3&&N1 > N3)
	{
	printf(" O menor número é %d",N3);

	}


else if (N3 > N1&&N2 > N1){
printf("O menor número é %d",N1);

}
system("pause");
}
