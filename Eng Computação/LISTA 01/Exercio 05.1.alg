algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 18/10/2015
// Se��o de Declara��es 
var
salario, grat, impost, ns : real
inicio
escreva ("Qual � o seu sal�rio? ")
leia (salario)
impost <- salario * 0.10
grat <- salario + 1000
ns <- impost + grat
escreva (" Seu sal�rio com a gratifica��o � de ", grat)

escreva (", com desconte � de ", impost)

escreva (" seu salario a receber � de ", ns)
// Se��o de Comandos 
fimalgoritmo
