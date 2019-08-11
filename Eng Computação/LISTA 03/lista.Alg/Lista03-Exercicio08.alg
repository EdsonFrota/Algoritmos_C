algoritmo "Questão 08"
// Função :Informa o reajuste dos salários menor ou igaul a 500
// Autor :Edson Júnior Frota da Silva
// Data : 01/11/2015
// Seção de Declarações
var
salario, reajuste:real
inicio
escreva("Informe o salário: ")
leia(salario)
se (salario <= 500)entao
   reajuste <- salario * 0.03
   escreval("O reajuste será de", reajuste)
   escreval("O novo salário será de", salario+reajuste)
senao
   escreval("O salario informado não permite reajuste.")
fimse

fimalgoritmo
