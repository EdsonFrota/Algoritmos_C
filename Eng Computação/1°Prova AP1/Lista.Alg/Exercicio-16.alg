algoritmo "16"
// Fun��o :Calcula o custo ao consumidor a partir dos imposto gerados
// Autor :Edson J�nior Frota da Silva
// Data : 22/11/2015
var
custoF,porcD, imposto, m,l:real
inicio
escreva("Digite o pre�o de f�brica do carro:")
leia(custoF)
porcD <- 0.28
imposto <- 0.45
m <- custoF*(porcD*imposto)
l <- custoF+m
escreval("O custo total do consumidor ser� de R$ ",l:3:3)
fimalgoritmo
