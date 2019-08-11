algoritmo "Exercico 15"
// Função :Informa a idade de  uma pessoa em dias
// Autor :Edson Júnior Frota da Silva
// Data : 15/11/2015
// Seção de Declarações
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
escreval("A idade em dias é" , dias)
fimalgoritmo
