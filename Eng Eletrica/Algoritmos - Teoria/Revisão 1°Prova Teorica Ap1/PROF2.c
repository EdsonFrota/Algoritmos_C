#include <stdio.h>
int main ()
{
    int valor , resto , n100 , n50 , n20 , n10 , n5 , n2, n1, x;
    printf ("\n Qual valor voce deseja ? ") ;
    scanf ("%d" ,& valor ) ;

    n100= valor/100;
    x=valor%100;
    n50=x/50;
    x=x%50;
    n20=x/20;
    x=x%20;
    n10=x/10;
    x=x%10;
    n5=x/5;
    x=x%5;
    n2=x/2;
    x=x%2;
    n1=(x!=0);
    printf("nota de 100=%d\n",n100);
    printf("nota de 50=%d\n",n50);
    printf("nota de 20=%d\n",n20);
    printf("nota de 10=%d\n",n10);
    printf("nota de 5=%d\n",n5);
    printf("nota de 2=%d\n",n2);
    printf("moeda de 1 real = %d",n1);
    /*n100 = valor / 100;
    resto = valor % 100;
    if( n100 != 0)
        printf ("\n %d nota (s) de 100. ", n100 ) ;

    n50 = resto / 50;
    resto = resto % 50;
    if( n50 != 0)
        printf ("\n %d nota (s) de 50. ", n50 ) ;
    n20 = resto / 20;
    resto = resto % 20;
    if( n20 != 0)
        printf ("\n %d nota (s) de 20. ", n20 ) ;
    n10 = resto / 10;
    resto = resto % 10;
    if( n10 != 0)
        printf ("\n %d nota (s) de 10. ", n10 ) ;
    n5 = resto / 5;
    resto = resto % 5;
    if( n5 != 0)
        printf ("\n %d nota (s) de 5.", n5 ) ;
    n2 = resto / 2;
    resto = resto % 2;
    if( n2 != 0)
        printf ("\n %d nota (s) de 2.", n2 ) ;
    if( resto != 0)
        printf ("\n %d moeda (s) de 1.", resto ) ; */
    return 0;
}
