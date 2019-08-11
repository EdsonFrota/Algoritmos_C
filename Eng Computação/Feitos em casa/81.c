#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, " ");
    int n=5, i;
    float vetorX[n],vetorY[n];
    float a, b, X, Y, Sx, Sy, SPxy, SQx, SQy, Denx, Deny, r;


    Sx=0;
    Sy=0;
    SPxy=0;
    SQx=0;
    SQy=0;
    printf("Pares de N:");
    scanf("%f %f", &vetorX[n], &vetorY[n]);
    i=0;
    for (i=0; i<n; i++)
    {
        printf("X: ");
        scanf("%f", &X);

        printf("Y: ");
        scanf("%f", &Y);

        Sx = Sx+X;
        Sy = Sy+Y;
        SPxy = SPxy + X*Y;
        SQx = SQx + pow(X,2);
        SQy = SQy + pow(Y,2);

        i= i+1;
    }

    Denx = n*SQx - pow(Sx,2);
    Deny = n*SQy - pow(Sy,2);

    if (Denx != 0 && Deny != 0)
    {
        a = (n*SPxy - Sx* Sy);
        b = (Sy*SQx - Sx*SPxy);
        r = (n*SPxy - Sx*Sy);

        printf("a = %f b = %f R = %f", a,b,r);
    }
    else
    {
        printf("Dominadores nulos");
    }

return 0;
}
