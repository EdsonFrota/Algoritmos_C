algoritmo "Quest�o 03"
// Fun��o :Informa se o resultado ou o produto � maior
// Autor :Edson J�nior Frota da Silva
// Data : 25/10/2015
// Se��o de Declara��es 
var
a, b, c, pA, pB, pC, resultado, pF :real
inicio
escreva("Digite o primeiro n�mero: ")
leia (a)
escreva("Digite o segundo n�mero: ")
leia (b)
escreva ("Digite o terceiro n�mero: ")
leia (c)
resultado <- 3*(a+b)/(a*c)-c+b
pA <- (a*a)
pB <- (b*b)
pC <- (c*c)
pF <- pA+pB+pC
se (resultado > pF) entao
escreval("O resultado � ", resultado)
senao (resultado < pF) entao
escreval ("O produto de A, B e C � ", pF)
fimse
fimalgoritmo
