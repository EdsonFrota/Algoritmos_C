/*5) Desenvolver um sistema, contendo um menu de escolha, para ler duas
matrizes de ordem 3 e executar as operações matriciais abaixo:
a) Calcular a subtração das duas matrizes;
b) Calcular a multiplicação das duas matrizes;
c) Determinar se as duas matrizes são triangular superior;
d) Determinar se as duas matrizes são triangular inferior;
e) Determinar se as duas matrizes são simétrica;
f) Determinar se as duas matrizes são anti-simétrica;*/
#include<stdio.h>
int main ()
{
    char op;
    int A[3][3], B[3][3];
    int i, j, sub, mult,verifica=1;

    printf("\t--- OPCOES --- \na)Calcular a subtracao das duas matrizes; \nb)Calcular a multiplicacao das duas matrizes;\n");
    printf("c)Determinar se as duas matrizes sao triangular superior; \nd)Determinar se as duas matrizes sao triangular inferior;\n");
    printf("e)Determinar se as duas matrizes sao simetrica; \nf)Determinar se as duas matrizes sao anti-simetrica;\n");

    printf("\nInforme os elementos da Matriz A 3x3:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Informe os elementos da Matriz B 3x3:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n Matrizes A e B: \n");
    printf("A = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %3d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("B = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %3d", B[i][j]);
        }
        printf("\n");
    }

     printf("\nDigite a opcao desejada: \n");
    scanf(" %c",&op);

    switch(op)
    {
    case 'a':
    case 'A':
        printf("\n Subtracao de A com B:\n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                sub = A[i][j]-B[i][j];
                printf(" %3d",sub);
            }
            printf("\n");
        }
        break;

    case 'b':
    case 'B':
        printf("\n Multiplicacao de A com B:\n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                mult = A[i][j]*B[i][j];
                printf(" %3d",mult);
            }
            printf("\n");
        }
        break;

    case 'c':
    case 'C':
        for(i=0; (i<3)&&(verifica==1); i++)
        {
            for(j=0; (j<i)&&(verifica==1); j++)
            {
                if(A[i][j]!=0)
                {
                    verifica = 0;
                }
            }
        }
        if(verifica != 1)
        {
            printf("Matriz [A] nao e triangular superior.");
        }
        else
        {
            printf("Matriz [A] e triangular superior.");
        }

        for(i=0; (i<3) && (verifica == 1); i++)
        {
            for(j=0; (j<i) &&(verifica == 1); j++)
            {
                if(B[i][j]!=0)
                {
                    verifica = 0;
                }

            }
        }

        if(verifica != 1)
        {
            printf("\nMatriz [B] nao e triangular superior.");
        }
        else
        {
            printf("\nMatriz [B] e triangular superior.");
        }
        break;

    case 'd':
    case 'D':
        for(i=0; (i<3)&&(verifica==1); i++)
        {
            for(j=(i+1); (j<3)&&(verifica==1); j++)
            {
                if(A[i][j]!=0)
                {
                    verifica = 0;
                }
            }
        }
        if(verifica != 1)
        {
            printf("Matriz [A] nao e triangular inferior.");
        }
        else
        {
            printf("Matriz [A] e triangular inferior.");
        }

        for(i=0; (i<3)&&(verifica==1); i++)
        {
            for(j=(i+1); (j<3)&&(verifica==1); j++)
            {
                if(B[i][j]!=0)
                {
                    verifica = 0;
                }
            }
        }

        if(verifica != 1)
        {
            printf("\nMatriz [B] nao e triangular inferior.");
        }
        else
        {
            printf("\nMatriz [B] e triangular inferior.");
        }
        break;

    case 'e':
    case 'E':
        for(i=0; (i<3)&&(verifica==1); i++)
        {
            for(j=0; (j<i)&&(verifica==1); j++)
            {
                if(A[i][j]!= A[j][i])
                {
                    verifica = 0;
                }
            }
        }
        if(verifica == 1)
        {
            printf("Matriz [A] e simetrica.");
        }
        else
        {
            printf("Matriz [A] nao e simetrica.");
        }

        for(i=0; (i<3)&&(verifica==1); i++)
        {
            for(j=0; (j<i)&&(verifica==1); j++)
            {
                if(B[i][j]!= B[j][i])
                {
                    verifica = 0;
                }
            }
        }
        if(verifica == 1)
        {
            printf("\nMatriz [B] e simetrica.");
        }
        else
        {
            printf("\nMatriz [B] nao e simetrica.");
        }
        break;

    case 'f':
    case 'F':
        for(i=0; (i<3) && (verifica==1); i++)
        {
            for(j=0; (j<i) && (verifica==1); j++)
            {
                if(A[i][j]!=(A[j][i]*-1))
                {
                    verifica =0;
                }
            }
        }
        if(verifica == 1)
        {
            printf("Matriz[A] e anti simetrica.");
        }
        else
        {
            printf("Matriz [A] nao e anti simetrica.");
        }

        for(i=0; (i<3)&&(verifica==1); i++)
        {
            for(j=0; (j<i)&&(verifica==1); j++)
            {
                if(B[i][j]!= (B[j][i]*-1))
                {
                    verifica = 0;
                }
            }
        }
        if(verifica == 1)
        {
            printf("\nMatriz [B] e anti simetrica.");
        }
        else
        {
            printf("\nMatriz [B] nao e anti simetrica.");
        }
        break;

    default:
        printf("Opcao Incorreta.");
    }
    return 0;
}

