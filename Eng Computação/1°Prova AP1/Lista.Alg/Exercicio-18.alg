Algoritmo "Exercicio 18"  
// Descri��o   :Informa o valor do fgts e mostra oi novo sal�rio
// Autor(a)    : Edson J�nior Frota da Silva
// Data atual  : 21/11/2015
Var
salario, fgts, nvsalario:real
Inicio
escreva("Informe o sal�rio: ")
leia(salario)
fgts <- 0.08 *salario
escreval("O desconto referente ao FGTS ser� de R$",fgts:2:2)
nvsalario <- salario - fgts
escreval("O novo sal�rio ser� de R$ ",nvsalario:2:2)
Fimalgoritmo