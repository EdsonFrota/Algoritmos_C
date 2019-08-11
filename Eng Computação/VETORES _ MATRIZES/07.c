#include<stdio.h>
#include<stdlib.h>
int main (void)
{

    int vet1[10], vet2[10], vet3[20];
    int x, y=0, w=0;

    for (x=0; x<10; x++)
    {
        printf("[Vetor 1] %d: ", x);
        scanf("%d", &vet1[x]);

        printf("[Vetor 2] %d: ", x);
        scanf("%d", &vet2[x]);
    }

    for (x=0; x<20; x++)
    {

        if (x%2 == 0)
        {
            vet3[x] = vet1[y];
            y++;
        }
        else
        {
            vet3[x] = vet2[w];
            w++;
        }


    }
    getch ();
    return 0;
    system ("pause");
}
