algoritmo "Quest�o 08"
// Fun��o :Informa se um determinado angulo pertence ao quandre impar ou par
// Autor :Edson J�nior Frota da Silva
// Data : 25/10/2015
// Se��o de Declara��es
var
angulo : inteiro
seno, cosseno : real
inicio
escreva ("Digite o �ngulo: ")  // ANGULO EM GRAUS
leia (angulo)
se (angulo > 360) entao
   angulo := angulo mod 360
fimse
se (angulo >= 0) e (angulo < 90) entao
   cosseno:= cos(angulo)
   escreva ("cosseno do 1� quadrante IMPAR =", cosseno )
fimse
se (angulo >= 90) e (angulo < 180) entao
   seno:= sen(angulo)
   escreva ("seno do 2� quadrante PAR = ",seno)
fimse
se (angulo >= 180) e (angulo < 270) entao
   cosseno:= cos(angulo)
   escreva ("cosseno do 3� quadrante IMPAR = ",cosseno)
fimse
se (angulo >= 270) e ( angulo < 360) entao
   seno:= sen(angulo)
   escreva ("seno do 4� quadrante PAR = ",seno)
fimse
fimalgoritmo
