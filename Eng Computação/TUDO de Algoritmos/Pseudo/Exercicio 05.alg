algoritmo "Qust�o 05"
// Fun��o :Gratifica��o e Imposto
// Autor :Edson J�nior Frota da Silva
// Data : 18/10/2015
// Se��o de Declara��es
var
   salario, nvsl, imposto, grat : real
inicio
escreva ("Digite o sal�rio do funcion�rio: ")
leia (salario)
imposto <- salario * 0.10
grat <- 1000
nvsl <- (salario - imposto) + grat
escreva ("O sal�rio que o funcion�rio tem a receber �: ", nvsl)

fimalgoritmo
