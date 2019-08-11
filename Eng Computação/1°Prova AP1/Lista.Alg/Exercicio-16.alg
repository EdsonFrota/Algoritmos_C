algoritmo "16"
// Função :Calcula o custo ao consumidor a partir dos imposto gerados
// Autor :Edson Júnior Frota da Silva
// Data : 22/11/2015
var
custoF,porcD, imposto, m,l:real
inicio
escreva("Digite o preço de fábrica do carro:")
leia(custoF)
porcD <- 0.28
imposto <- 0.45
m <- custoF*(porcD*imposto)
l <- custoF+m
escreval("O custo total do consumidor será de R$ ",l:3:3)
fimalgoritmo
