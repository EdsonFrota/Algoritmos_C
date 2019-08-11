algoritmo "Exercico 13"
// Função :Informa a Distância entre2 pontos
// Autor :Edson Júnior Frota da Silva
// Data : 15/11/2015
// Seção de Declarações
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
escreval("A distânica entre os pontos é ", d:2:2)
fimalgoritmo
