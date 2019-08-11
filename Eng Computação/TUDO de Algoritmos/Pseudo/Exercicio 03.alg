algoritmo "Qustão 03"
// Função : Calcula gastos de Energia
// Autor : Edson Júnior Frota da Silva
// Data : 18/10/2015
// Seção de Declarações 
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
escreva (" Com o desconto de 10% voce irá pagar ", desc)

fimalgoritmo
