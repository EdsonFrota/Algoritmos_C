algoritmo "Questão 16"
// Função :Ordem decrescente entre 3 números
// Autor :Edson Júnior Frota da Silva
// Data : 24/10/2015
// Seção de Declarações 
var
a, b, c : inteiro
inicio
escreva("Digite o primeiro número:")
leia (a)
escreva("Digite o segundo número:")
leia (b)
escreva("Digite o terceiro número:")
leia (c)
se ((a > b) e (b > c)) entao
escreval (a, b, c)
fimse
se ((b > a) e (a > c) e (c < b)) entao
escreval (b, a, c)
fimse
se ((c > a) e (c > b) e (a < b)) entao
escreval (c, b, a)
fimse
se ((c > b) e (b < a) e (a < c)) entao
escreval (c, a, b)
fimse
se ((b > c) e (c > a) e (a < b)) entao
escreval (b, c, a)
fimse
se ((a > b) e (c < a) e (b < c)) entao
escreval (a, c, b)
fimse
fimalgoritmo
