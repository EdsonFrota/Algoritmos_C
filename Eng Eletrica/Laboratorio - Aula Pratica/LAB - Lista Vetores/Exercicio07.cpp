/*Leia dois conjuntos – A e B – de números inteiros, o tamanho de cada conjunto será 30; */
#include<stdio.h>
int main ()
{
    int i,j, v1[30], v2[30], v3[30], x1=0,x2=0,y1,y2, total=0;
    char op;
    printf("B) Conjunto Uniao\nC) Conjunto Interseccao ");
    printf("\nD) Difereca A-B\nE) Diferenca B-A \n");
    printf("F) A e B sao Indenticos\nG) A suconjunto de B\n");

    printf("Digite a opcao desejada: ");
    scanf(" %c",&op);

    printf("\n Informe os valores dos conjuntos A e B\n");
    for(i=0; i<30; i++)
    {
        printf("[%d]: ", i);
        scanf("%d", &v1[i]);
    }
    for(i=0; i<30; i++)
    {
        printf("[%d]: ",i);
      scanf("%d", &v2[i]);
    }
    switch(op)
    {

    case 'b':
    case 'B':
        for(i=0; i<60; i++)
        {
            if(i%2==0)
            {
                v3[i]=v1[x2];
                x2++;
            }
            else
            {
                v3[i]=v2[x1];
                x1++;
            }
        }

        printf("C = AUB :{");
        for(i=0; i<60; i++)
        {
            printf(" %d",v3[i]);
        }
        printf("}");
        break;

    case 'c':
    case 'C':
        for(i=0; i<60; i++)
        {
            for(i=0; i<60; i++)
            {
                if(v1[i]==v2[i])
                {
                    v3[i] = v2[i];
                    total++;
                }
            }
        }
        if(total == 0)
        {
            printf("Nao ha inteseccao.");
        }
        else
        {
            total-1+1;
        }

        printf("C = A^B:{");
        for(i=0; i<total; i++)
        {
            printf(" %d", v3[i]);
        }
        printf("}");
        break;

    case 'd':
    case 'D':
        printf("E = A - B:{");
        for(i=0; i<30; i++)
        {

            if(v1[i]!=v3[i])
            {
                printf(" %d",v1[i]);
            }
        }
        printf("}");
        break;
    case 'e':
    case 'E':
        printf("E = B - A: {");
        if((y1==1)&&(y2==1))
            for(i=0; i<30; i++)
            {
                if(v2[i]!=v3[i])
                {
                    printf(" %d",v2[i]);
                }
            }
        printf("}");
        break;

    case'f':
    case'F':
        for(i=0; i<30; i++)
        {
            for(i=0; i<30; i++)
            {
                v1[i]=v2[i];
                i=i+1;
            }
        }
        if(v1[i]=v2[i])
        {
            printf("Vetor indentico");

        }
        else
        {
            printf("Vetor não indentico");
        }

        break;

    case 'g':
    case 'G':
        for(i=0; i<30; i++)
        {
            for(i=0; i<30; i++)
            {
            }


            if(v1[i]+v2[i]==v3[i])
            {
                printf("\n A e subconjunto de B.");
            }
            else
            {
                printf("\n A nao e subconjunto de B.");
            }
        }
        break;

    default:
        printf("Opcao incorreta.");
    }
    return 0;
}
