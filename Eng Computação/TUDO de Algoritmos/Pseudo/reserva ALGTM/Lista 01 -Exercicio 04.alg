algoritmo "Quest�o 04"
// Fun��o :Calcula o sal�rio que um fucion�rio ir� receber
// Autor :Edson J�nior Frota da Silva
// Data : 18/10/2015
// Se��o de Declara��es
var
   salario, prc, aumt, nvsl : real
inicio
escreva ("Digite o valor do sal�rio: ")
leia (salario)
escreva ("Digite o valor do aumento em porcentagem: ")
leia (prc)
aumt <- salario * (prc / 100)
nvsl <- aumt + salario
escreva ("O valor do aumento � de: ", aumt)
escreva ("  O valor do novo sal�rio �: ", nvsl)
fimalgoritmo
