#include<stdio.h>
int main (void){
int i;
float v[6]= {2.0, 5.0, 1.0, 7.0, 8.0, 4.0};
float s= 0.0;
for (i=0; i<6; ++i){
    s+= v[i];
}
printf("%.2f", s);
return 0;
}
