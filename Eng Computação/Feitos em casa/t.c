#include<stdio.h>
int main (void)
{
int i;
float v[6]= {2.3, 5.9, 1.0, 7.6, 8.5, 4.6};
float maior_valor = v[0];
for (i=0; i<6; ++i){
if(v[i]>=maior_valor)
    maior_valor = v[i];
}
printf("\t%.2f", maior_valor);
return 0;
}
