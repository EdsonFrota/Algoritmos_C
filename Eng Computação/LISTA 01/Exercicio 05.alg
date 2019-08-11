algoritmo "semnome"
// Função :
// Autor :
// Data : 18/10/2015
// Seção de Declarações 
var
salario, grat, impost, ns : real
inicio
escreva ("Qual é o seu salário? ")
leia (salario)
impost <- salario * 0.10
grat <- salario + 1000
ns <- impost + grat
escreva (" Seu salário com a gratificação é de ", grat)

escreva (", com desconte é de ", impost)

escreva (" seu salario a receber é de ", ns)
// Seção de Comandos 
fimalgoritmo
