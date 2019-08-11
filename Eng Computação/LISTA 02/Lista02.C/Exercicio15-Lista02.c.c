/*Questão 15*/
#include<stdio.h>
#include<stdlib.h>

main () {
	
	int a, b, c;
	
	printf("Digite tres numero:");
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a > b) && (b > c)) {
		
		printf("%d %d %d\n", c, b,a);
	}
	
	if ((a < b) && (b < c) && (c > a)) {
		
		printf("%d %d %d\n", a, b, c);
		
	}	
	
	if	((b > a ) && (b < c) && (a > c)) {
		
		printf("%d %d %d\n", c, a, b);
		
	}
	
	if ((a > b) && (b < c) && (c > a)) {
		
		printf("%d %d %d\n", b, c, a);
		
	}
	
	if ((b < a ) && (a < c) && (c > b)) {
		
		printf("%d %d %d\n", b, a, c);
		
	}
	
	if ((a < b) && (c < b) && (c > a)) {
		
		printf("%d %d %d\n", a, c, b);
	}	
	
	system ("pause");
}

