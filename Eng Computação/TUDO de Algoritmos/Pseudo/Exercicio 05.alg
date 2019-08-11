algoritmo "Qustão 05"
// Função :Gratificação e Imposto
// Autor :Edson Júnior Frota da Silva
// Data : 18/10/2015
// Seção de Declarações
var
   salario, nvsl, imposto, grat : real
inicio
escreva ("Digite o salário do funcionário: ")
leia (salario)
imposto <- salario * 0.10
grat <- 1000
nvsl <- (salario - imposto) + grat
escreva ("O salário que o funcionário tem a receber é: ", nvsl)

fimalgoritmo
