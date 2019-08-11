# include <stdio.h>
int main ()
{
    char op ;
    float tempA , tempB ;
    printf ("\n Entre com a temperatura que deseja converter : ") ;
    scanf ("%f" ,& tempA ) ;
    printf ("\n Entre com uma das opcoes : (a - conventer para Fahrenheit | b -converter para Celsius ): ") ;
    scanf (" %c" ,& op ) ;
    switch ( op )
    {
    case 'a':
        tempB = ( tempA *1.8) +32;
        printf ("\n A temperatura em Fahrenheit : %.2f", tempB ) ;
        break ;
    case 'b':
        tempB = ( tempA -32) /1.8;
        printf ("\n A temperatura em Celsius : %.2f", tempB ) ;
        break ;
    default :
        printf (" INVALIDO ") ;
    }
    return 0;
}
