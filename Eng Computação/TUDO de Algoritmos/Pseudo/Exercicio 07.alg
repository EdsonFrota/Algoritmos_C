algoritmo "Quest�o 07"
// Fun��o :Informa o saldo atual de um trabalhador
// Autor :Edson J�nior Frota da Silva
// Data : 18/10/2015
// Se��o de Declara��es 
var
   salario, depst, total, nvsalario : real
inicio
escreva ("Informe o sal�rio: ")
leia (salario)
depst <- (salario * 0.003)*2 // Multiplicado por 2, pois trabalahdor fez duas opara��es
nvsalario <- (salario - depst)+ 100 // Adicionado 100, pois era o saldo anterior
escreva (" O saldo atual � de ", nvsalario )

fimalgoritmo
