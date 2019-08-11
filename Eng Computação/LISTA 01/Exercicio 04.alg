algoritmo "semnome"
// Função :
// Autor :Edson Júnior Frota da Silva
// Data : 18/10/2015
var
salario, perct, valor, final :real
inicio
escreva ("Qual é o seu salário? ")
leia (salario)
escreva ("Digite o percentual de aumento: ")
leia (perct)
valor <- salario * (perct / 100)
escreva ("O valor do reajuste é de ", valor)
final <- salario + valor
escreva (" Seu novo salário é de ", final)
fimalgoritmo
