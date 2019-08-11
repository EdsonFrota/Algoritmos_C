algoritmo "Questão 03"
// Função :Informa se o resultado ou o produto é maior
// Autor :Edson Júnior Frota da Silva
// Data : 25/10/2015
// Seção de Declarações 
var
a, b, c, pA, pB, pC, resultado, pF :real
inicio
escreva("Digite o primeiro número: ")
leia (a)
escreva("Digite o segundo número: ")
leia (b)
escreva ("Digite o terceiro número: ")
leia (c)
resultado <- 3*(a+b)/(a*c)-c+b
pA <- (a*a)
pB <- (b*b)
pC <- (c*c)
pF <- pA+pB+pC
se (resultado > pF) entao
escreval("O resultado é ", resultado)
senao (resultado < pF) entao
escreval ("O produto de A, B e C é ", pF)
fimse
fimalgoritmo
