algoritmo "semnome"
// Função :
// Autor :
// Data : 18/10/2015
// Seção de Declarações 
var
salario, nvsal, gratifc, impst, dcst : real
inicio
escreva (" Digite seu salário: ")
leia (salario)
gratifc <- salario * 0.05
impst <- salario * 0.07
dcst <- salario - impst
nvsal <- dcst + gratifc
escreva (" Seu salário vai ser de R$", nvsal)

// Seção de Comandos 
fimalgoritmo
