algoritmo "Quest�o 08"
// Fun��o :Informa o reajuste dos sal�rios menor ou igaul a 500
// Autor :Edson J�nior Frota da Silva
// Data : 01/11/2015
// Se��o de Declara��es
var
salario, reajuste:real
inicio
escreva("Informe o sal�rio: ")
leia(salario)
se (salario <= 500)entao
   reajuste <- salario * 0.03
   escreval("O reajuste ser� de", reajuste)
   escreval("O novo sal�rio ser� de", salario+reajuste)
senao
   escreval("O salario informado n�o permite reajuste.")
fimse

fimalgoritmo
