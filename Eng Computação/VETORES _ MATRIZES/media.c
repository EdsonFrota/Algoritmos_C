#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");
const int TotaldeNotas = 4;
const int NumerodeAlunos = 4;

int aluno, notas;
float NotasAlunos[4][4] = {0};
float MediaAlunos[4] = {0};
float media = 0;

printf("NOTAS aluno 1: ");

for (aluno=0; aluno < NumerodeAlunos; ++aluno){
    for (notas=0; notas<TotaldeNotas; ++notas){
        scanf("%f", &NotasAlunos[aluno][notas]);
        media += NotasAlunos[aluno][notas];
}

    MediaAlunos[aluno] = media/TotaldeNotas;
    media = 0;
    printf("NOTAS aluno %d: \n", aluno+2);
}
    for(aluno=0; aluno < 4; ++aluno){
        printf("MÉDIA aluno [%d] é = %.2f\n", aluno+1, MediaAlunos[aluno]);
    }
}
