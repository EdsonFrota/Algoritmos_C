algoritmo "Exercico 13"
// Fun��o :Informa a Dist�ncia entre2 pontos
// Autor :Edson J�nior Frota da Silva
// Data : 15/11/2015
// Se��o de Declara��es
var
x1, x2, y1, y2, d:real
inicio
escreval("Digite os pontos x1 e y1:")
leia(x1)
leia(y1)
escreval("Digite os pontos x2 e y2:")
leia(x2)
leia(y2)
d <- raizq((x2 - x1)^2+(y2-y1)^2)
escreval("A dist�nica entre os pontos � ", d:2:2)
fimalgoritmo
