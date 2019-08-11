#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char orig, char destino, char temp)

{

    /* mova n discos do pino a para o pino b usando

    o pino c como intermediario                    */

    if (n == 1){

        printf("\tMove disco %d de %c para %c\n", n, orig, destino);

    }
    else
    {

        hanoi(n - 1, orig, temp, destino);

        printf("\tMove disco %d de %c para %c\n", n, orig, destino);

        hanoi(n - 1, temp, destino, orig);

    }

}

int main(void)

{

    int numDiscos;

    printf("Entre com a quantidade de discos: ");

    scanf("%d", &numDiscos);

    hanoi(numDiscos, 'A', 'B', 'C');

    return 0;

}
