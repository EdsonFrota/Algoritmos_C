algoritmo "Quest�o 15"
// Fun��o :Ordem crescente entr 3 n�meros
// Autor :Edson J�nior Frota da Silva
// Data : 27/3/2011
// Se��o de Declara��es
var
a,b,c: inteiro
inicio
escreva("Digite o primeiro n�mero:")
leia (a)
escreva("Digite o segundo n�mero:")
leia (b)
escreva ("Digite o terceiro n�mero:")
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
