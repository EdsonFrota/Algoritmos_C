algoritmo "Questão 03"
// Função :Informa o menor numero
// Autor :Edson Júnior Frota da Silva
// Data : 01/11/2015
// Seção de Declarações
var
N1, N2, N3 :inteiro
inicio
escreval("Digite 3 números:")
leia(N1)
leia(N2)
leia(N3)
se ((N1 > N2) e (N3 > N2)) entao
   escreval (" O menor numero é", N2)
senao
   se ((N2 > N3) e (N1 > N3)) entao
      escreval(" O menor número é", N3)
   senao
      se ((N3 > N1) e (N2 > N1)) entao
         escreval ("O menor número é", N1)
      fimse
   fimse
fimse
fimalgoritmo
