/*Questão 04*/
#include<stdio.h>
#include<stdlib.h>
main  ()
{
	float p1, p2, p3, p4, t1, t2, t3, t4, mp, mt, mf;
	
	printf("Digite o valor das suas 4 notas de prova: ");
	scanf("%f %f %f %f", &p1, &p2, &p3, &p4);
	
	printf("Digite as 4 notas de trabalho: ");
	scanf("%f %f %f %f", &t1, &t2, &t3, &t4);
	
	mp = (p1+p2+p3+p4) / 4;
	mt = (t1+t2+t3+t4) / 4;
	mf = 0.8 * mp + 0.2 * mt;
	
	if (mf >= 6.0){
		
		printf("APROVADO %f\n");
	} 
	else {
		
		printf("REPROVADO %f\n");
	}
	system ("pause");
}
