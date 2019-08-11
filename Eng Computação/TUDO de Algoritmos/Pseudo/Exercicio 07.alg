algoritmo "Questão 07"
// Função :Informa o saldo atual de um trabalhador
// Autor :Edson Júnior Frota da Silva
// Data : 18/10/2015
// Seção de Declarações 
var
   salario, depst, total, nvsalario : real
inicio
escreva ("Informe o salário: ")
leia (salario)
depst <- (salario * 0.003)*2 // Multiplicado por 2, pois trabalahdor fez duas oparações
nvsalario <- (salario - depst)+ 100 // Adicionado 100, pois era o saldo anterior
escreva (" O saldo atual é de ", nvsalario )

fimalgoritmo
