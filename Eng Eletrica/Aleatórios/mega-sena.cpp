#include<stdlib.h>
#include<stdio.h>
int main( )
{
    int a,b,c,d,e,f, x=1; //cada letra representa uma das 6 dezenas
    for (a=0; a<=55; a=a+2)
        for (b=a+1; b<=56; b=b+2)
            for (c=b+1; c<=57; c=c+2)
                for (d=c+1; d<=58; d=d+2)
                    for (e=d+1; e<=59; e=e+2)
                        for (f=e+1; f<=60; f=f+2)

                            printf("\n%d dezenas: %d, %d, %d, %d, %d, %d",x++,a,b,c,d,e,f);
    return 0;
}
