#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SENHA 1234
void alarme(void); /* declara��o da fun��o */
void main(void) {
int s;
("cls");
printf("\nSenha: ");
scanf("%d", &s);
if( s != SENHA ) {
printf("\nSenha inv�lida!");
alarme();
}
else printf("\nSenha Ok!");
getch();
}
void alarme(void) { /* defini��o da fun��o */
int f;
for(f=100; f<=5000; f+=20) {


}

}
