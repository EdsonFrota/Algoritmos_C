algoritmo "Questão 04"
// Função :Calcula o salário que um fucionário irá receber
// Autor :Edson Júnior Frota da Silva
// Data : 18/10/2015
// Seção de Declarações
var
   salario, prc, aumt, nvsl : real
inicio
escreva ("Digite o valor do salário: ")
leia (salario)
escreva ("Digite o valor do aumento em porcentagem: ")
leia (prc)
aumt <- salario * (prc / 100)
nvsl <- aumt + salario
escreva ("O valor do aumento é de: ", aumt)
escreva ("  O valor do novo salário é: ", nvsl)
fimalgoritmo
