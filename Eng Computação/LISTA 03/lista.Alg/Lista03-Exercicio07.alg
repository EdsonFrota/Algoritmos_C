algoritmo "Quest�o 07"
// Fun��o :Mostra o n�mero correspondente a casa das dezenas
// Autor :Edson J�nior Frota da Silva
// Data : 02/11/2015
// Se��o de Declara��es
var
un, dz, ct, nm:inteiro
casadz:real
inicio
escreva("Digite um n�mero com 3 casa: ")
leia(nm)
un <- nm % 10
dz <- nm % 100 - un
casadz<-dz/10

escreval("a dezena �:",casadz)
fimalgoritmo
