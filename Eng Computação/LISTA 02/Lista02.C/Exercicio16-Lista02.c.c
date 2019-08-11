/*Questão 16*/
#include<stdio.h>
#include<stdlib.h>

main () {
	
	int a, b, c;
	
	printf("Digite tres numeros: ");
	scanf("%d %d %d", &a, &b , &c);
	
	if ((a > b) && (b > c)) {
		
		printf("%d %d %d\n", a, b, c);
	}
	
	if ((b > a) && (a > c) && ( c < b)) {
		
		printf("%d %d %d\n", b, a, c);
		
	}
	
	if ((c > b) && (b < a) && (a < c)) {
		
		printf("%d %d %d\n", c, a, b);
	}
	
	if ((b > a) && (c > a) && (a < b)) {
		
		printf("%d %d %d\n", b, c, a);
	}
	
	if ((a > b) && (c < a) && (b < c)) {
		
		printf("%d %d %d\n", a, c, b);
	}
	system ("pause");
}
