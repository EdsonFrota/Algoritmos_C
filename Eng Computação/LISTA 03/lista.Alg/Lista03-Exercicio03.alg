algoritmo "Quest�o 03"
// Fun��o :Informa o menor numero
// Autor :Edson J�nior Frota da Silva
// Data : 01/11/2015
// Se��o de Declara��es
var
N1, N2, N3 :inteiro
inicio
escreval("Digite 3 n�meros:")
leia(N1)
leia(N2)
leia(N3)
se ((N1 > N2) e (N3 > N2)) entao
   escreval (" O menor numero �", N2)
senao
   se ((N2 > N3) e (N1 > N3)) entao
      escreval(" O menor n�mero �", N3)
   senao
      se ((N3 > N1) e (N2 > N1)) entao
         escreval ("O menor n�mero �", N1)
      fimse
   fimse
fimse
fimalgoritmo
