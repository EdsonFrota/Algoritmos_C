#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main () {
    srand(time(NULL));
    setlocale(LC_ALL, "");

     int i;

     printf("====== Gerando 6 valores aleat�rios =======\n\n");

      for (i = 1; i < 7; i++)
     {
           printf("%i ", rand() % 60); /* Gerando Valores Aleat�rios Entre 1 e 60 */
     }

     getch();
     return 0;
}
