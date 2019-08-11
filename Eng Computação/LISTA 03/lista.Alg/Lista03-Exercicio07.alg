algoritmo "Questão 07"
// Função :Mostra o número correspondente a casa das dezenas
// Autor :Edson Júnior Frota da Silva
// Data : 02/11/2015
// Seção de Declarações
var
un, dz, ct, nm:inteiro
casadz:real
inicio
escreva("Digite um número com 3 casa: ")
leia(nm)
un <- nm % 10
dz <- nm % 100 - un
casadz<-dz/10

escreval("a dezena é:",casadz)
fimalgoritmo
