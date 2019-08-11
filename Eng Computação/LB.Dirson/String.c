#include <stdio.h>
#include <stdlib.h>
void main()
{
  int i;
  char x, string[11]; /*um espaço a mais para o \0 que eh o terminador nulo na cadeia em C */
  x = 'a';
  for (i=0;i<10;i++) {
     string[i] = x++;
  }
  printf ("Imprimindo a cadeia de caracteres (string) \n [");
   for (i=0;i<10;i++)
       printf (" %c ", string[i]);
  printf ("] \n");
  system("pause");
}

