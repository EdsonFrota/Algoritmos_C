algoritmo "Qust�o 03"
// Fun��o : Calcula gastos de Energia
// Autor : Edson J�nior Frota da Silva
// Data : 18/10/2015
// Se��o de Declara��es 
var
   consumo, valor, preco, desc : real
inicio
escreva ("Digite o seu consumo de energia:")   // em quilowatts
leia (consumo)
escreva ("Qual o valor do Quilowatts?")
leia (valor)
preco <- consumo * valor
escreva ("Voce paga de energia ", preco)
desc <- preco - 0.10
escreva (" Com o desconto de 10% voce ir� pagar ", desc)

fimalgoritmo
