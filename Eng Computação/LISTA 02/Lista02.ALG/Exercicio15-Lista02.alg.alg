algoritmo "Questão 15"
// Função :Ordem crescente entr 3 números
// Autor :Edson Júnior Frota da Silva
// Data : 27/3/2011
// Seção de Declarações
var
a,b,c: inteiro
inicio
escreva("Digite o primeiro número:")
leia (a)
escreva("Digite o segundo número:")
leia (b)
escreva ("Digite o terceiro número:")
leia (c)
se ((a > b) e (b > c)) entao
   escreval (c, b, a)
fimse
se ((a < b) e (b < c) e(c > a)) entao
   escreval (a, b, c)
fimse
se ((b > a) e (b < c) e (a > c)) entao
   escreval (c, a, b)
fimse
se ((c < a ) e (b > c) e (b > a)) entao
   escreval (c, a, b )
fimse
se ((a > b) e (b < c) e (c < a)) entao
   escreval (b, c, a)
fimse
se ((b < a) e (a < c) e (c > b))entao
   escreval (b, a , c)
fimse
se ((a < b) e (c < b) e ( c > a)) entao
   escreval(a, c, b)
fimse
fimalgoritmo
