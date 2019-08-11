algoritmo "Questão 08"


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
