algoritmo "Exercico 15"
// Fun��o :Informa a idade de  uma pessoa em dias
// Autor :Edson J�nior Frota da Silva
// Data : 15/11/2015
// Se��o de Declara��es
var
anos, dias, meses:inteiro
inicio
escreva("Digite idade em anos:")
leia(anos)
escreva("Digite a idade em meses:")
leia(meses)
escreva("Digite a idade em dias:")
leia(dias)
dias <- (dias + (anos*360) + (meses*30))
escreval("A idade em dias �" , dias)
fimalgoritmo
