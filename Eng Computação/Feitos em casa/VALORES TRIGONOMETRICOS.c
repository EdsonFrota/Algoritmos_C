#include<stdio.h>
#define PI 3.1415926
int main()   /* tabela da fun¸cão "seno" entre 0..90 graus */
{
    printf("\t === SENO ===\n\n");
    int x;
    for (x=0; x <= 90; x+=5)
    {
        printf("%3d = %6.5f\n", x, sin((PI/180)*x));
    }
    printf("\n\n\n\t === COSSENO ===\n\n");
    for (x=0; x <= 90; x+=5)
    {
        printf("%3d = %6.5f\n", x, cos((PI/180)*x));
    }
    printf("\n\n\n\t === TANGENTE ===\n\n");
    for (x=0; x <= 85; x+=5)
    {
        printf("%3d = %6.5f\n", x, tan((PI/180)*x));
    }
}
