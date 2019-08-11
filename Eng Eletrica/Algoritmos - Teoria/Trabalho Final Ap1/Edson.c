/* d)Seu programa deve validar o valor de M (3 <= M <= 100).
Cada parte do ítem (d) deve ser feita separadamente, na seguinte ordem:
d1) Ler e validar M
d2) Ler a matriz
d3) Encontrar os 3 menores, e os 3 maiores elementos, e criar o vetor B
d4) Encontrar a soma dos dois maiores
d5) Encontrar a diferença dos dois menores
d6) Imprimir os ímpares entre a diferença e a soma*/

#include<stdio.h>

int somaMaioresValores(int v1, int v2, int v3)
{
    int S;
    if((v1 >= v2) && (v1 >= v3) && (v2 >= v3))
    {
        S = v1 + v2;
        return S;
    }
    else if ((v2 >= v1) && (v2 >= v3) && (v1 >= v3))
    {
        S = v2 + v1;
        return S;
    }
    else if ((v3 >= v1) && (v3 >= v2) && (v1 >= v2))
    {
        S = v3 + v1;
        return S;
    }
    else if ((v3 >= v1) && (v3 >= v2) && (v2 >= v1))
    {
        S = v3 + v2;
        return S;
    }
    else if ((v1 >= v2) && (v1 >= v3) && (v3 >= v2))
    {
        S = v1 + v3;
        return S;
    }
    else if ((v2 >= v1) && (v2 >= v3) && (v3 >= v1))
    {
        S = v2 + v3;
        return S;
    }
}
int diferencaMenoresValores(int v4, int v5, int v6)
{
    int D;
    if((v4 <= v5) && (v4 <= v6) && (v5 <= v6))
    {
        if(v4 <= v5)
            D = v5 - v4;
        return D;
    }
    else if((v4 <= v5) && (v4 <= v6) && (v6 <= v5))
    {
        if(v4 <= v6)
            D = v6 - v4;
        return D;
    }
    else if ((v5 <= v4) && (v5 <= v6) && (v4 <= v6))
    {
        if(v5 <= v4)
        {
            D = v4 - v5;
            return D;
        }
        else if((v5 <= v4) && (v5 <= v6) && (v6 <= v4))
        {
            if(v5 <= v6)
                D = v6 - v5;
            return D;
        }
        else if((v6 <= v4) && (v6 <= v5) && (v4 <= v5))
        {
            if(v6 <= v4)
                D = v4 - v6;
            return D;
        }
        else if((v6 <= v4) && (v6 <= v5) && (v5 <= v4))
        {
            if(v6 <= v5)
                D = v5 - v6;
            return D;
        }
    }
}

void imprimeImpares(int D, int S)
{
    for(D = D; D<=S; D++)
    {
        if(D%2!=0)
        {
            printf(" %d ",D);
            D++;
        }
    }
    printf("\n");
}
int main ()
{
    int i, j, M;
    int v1, v2, v3, v4, v5, v6, w=0;
    int cont = 1;

       /* M =  Dimensão da Matriz.                          *
        * v1, v2, v3 = Os maiores elementos da Matriz.      *
        * v4, v5, v6 = Os menores elementos da Matriz.      *
        * w = contador apenas para achar o menor elemento.  *
        * cont = contador apenas para quando digitar um dimensão invalida voltar ao começo e pedir que digite novamente.*/

    int D, S;

    do
    {
        printf("\nInforme a Dimensao da Matriz: ");
        scanf("%d",&M);

        int A[M][M];

        if((M >= 3) && (M <= 100))
        {
            printf("\nInforme os elemetos da Matriz %dx%d:\n",M,M);
            for(i=0; i<M; i++)
            {
                for(j=0; j<M; j++)
                {
                    printf("Linha %d :: Coluna %d :: ", i+1, j+1);
                    scanf("%d",&A[i][j]);
                }
            }
            printf("\n\tMatriz Gerada:\n\t");
            for(i=0; i<M; i++)
            {
                for(j=0; j<M; j++)
                {
                    printf("%3d",A[i][j]);
                }
                printf("\n\t");
            }

            // Encontra os maiores elementos da Matriz
            v1 = A[0][0];
            for(i=0; i<M; i++)
            {
                for(j=0; j<M; j++)
                {
                    if(A[i][j] >= v1)
                    {
                        v3 = v2;
                        v2 = v1;
                        v1 = A[i][j];
                    }
                    else if(A[i][j] >= v2)
                    {
                        v3 = v2;
                        v2 = A[i][j];
                    }
                    else if(A[i][j] >= v3)
                    {
                        v3 = A[i][j];
                    }
                }
            }

            // Encontra os menores elementos da Matriz
            for(i=0; i<M; i++)
            {
                for(j=0; j<M; j++)
                {
                    if(w==0)
                    {
                        v4 = A[i][j];
                        w++;
                    }
                    else if(A[i][j] >= v4 && w == 1)
                    {
                        v5 = v4;
                        v4 = A[i][j];
                        v5=v4;
                        w++;
                    }
                    else if(A[i][j] > v4 && w == 2)
                    {
                        v6 = v5;
                        v5 = v4;
                        v4 = A[i][j];
                        v6=v4;
                        w++;
                    }
                }
            }
            printf("\nA soma dos maiores valores = %d\n",somaMaioresValores(v1,v2,v3));
            printf("\nA diferenca dos menores valores = %d\n",diferencaMenoresValores(v4,v5,v6));

            D = diferencaMenoresValores(v4,v5,v6);
            S = somaMaioresValores(v1,v2,v3);

            printf("\nOs impares entre %d e %d: \n",D, S);
            imprimeImpares(D,S);

            cont = 0;
        }
        else
        {
            printf("Matriz Invalida. Informe novamente.");
        }
    }
    while(cont);

    return 0;
}
