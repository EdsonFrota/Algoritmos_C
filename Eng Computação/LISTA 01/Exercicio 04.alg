algoritmo "semnome"
// Fun��o :
// Autor :Edson J�nior Frota da Silva
// Data : 18/10/2015
var
salario, perct, valor, final :real
inicio
escreva ("Qual � o seu sal�rio? ")
leia (salario)
escreva ("Digite o percentual de aumento: ")
leia (perct)
valor <- salario * (perct / 100)
escreva ("O valor do reajuste � de ", valor)
final <- salario + valor
escreva (" Seu novo sal�rio � de ", final)
fimalgoritmo
