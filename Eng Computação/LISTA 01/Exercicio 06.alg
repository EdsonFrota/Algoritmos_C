algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 18/10/2015
// Se��o de Declara��es 
var
salario, nvsal, gratifc, impst, dcst : real
inicio
escreva (" Digite seu sal�rio: ")
leia (salario)
gratifc <- salario * 0.05
impst <- salario * 0.07
dcst <- salario - impst
nvsal <- dcst + gratifc
escreva (" Seu sal�rio vai ser de R$", nvsal)

// Se��o de Comandos 
fimalgoritmo
