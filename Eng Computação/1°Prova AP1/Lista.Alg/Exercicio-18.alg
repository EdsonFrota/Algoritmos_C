Algoritmo "Exercicio 18"  
// Descrição   :Informa o valor do fgts e mostra oi novo salário
// Autor(a)    : Edson Júnior Frota da Silva
// Data atual  : 21/11/2015
Var
salario, fgts, nvsalario:real
Inicio
escreva("Informe o salário: ")
leia(salario)
fgts <- 0.08 *salario
escreval("O desconto referente ao FGTS será de R$",fgts:2:2)
nvsalario <- salario - fgts
escreval("O novo salário será de R$ ",nvsalario:2:2)
Fimalgoritmo