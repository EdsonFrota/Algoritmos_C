/* raiz do menor e o quadrado do maior*/
#include<stdio.h>
#include<math.h>
int main ()
{
    float a, b;
    printf("Digite o 1a numero: ");
    scanf("%f",&a);
    printf("Digite o 2a numero: ");
    scanf("%f",&b);
    if (a<0 && b>0)
    {
        b=pow(b,2);
        printf("Nao existe raiz de numero negativo. O quadr e = %.1f",b);
    }
    else
    {
        if (a<0 && b<0)
        {
            a=pow(a,2);
            printf("Nao existe raiz de numero negativo. O quadr e = %.1f",a);


        }
        else
        {
            if(a < b)
            {
                a=sqrt(a);
                b=pow(b,2);
                printf("raiz = %.1f \nquadrado = %.1f ", a, b);
            }
            else
            {
                if(b > a)
                {
                    a=sqrt(a);
                    b=pow(a,2);
                    printf("raiz = %.1f \n quad= %.1f ",a,b);

                }
                else
                {
                    if(a==b && b==a)
                    {
                        a=pow(a,2);
                        b=sqrt(b);
                        printf("Numeros iguais portanto \n raiz = %.1f \n quad = %.1f ",b,a);
                    }
                    else
                    {
                        if (a > b)
                        {
                            a=pow(a,2);
                            b=sqrt(b);
                            printf("raiz = %f \n quad =%f ",b,a);
                        }

                    }

                }
            }
        }
    }
}
