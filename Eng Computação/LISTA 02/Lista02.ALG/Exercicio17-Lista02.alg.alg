algoritmo "Quest�o 17"
// Fun��o :Informa o peso ideal tanto para o sexo feminino e masculino
// Autor :Edson J�nior Frota da Silva
// Data : 25/10/2015
// Se��o de Declara��es 
var
altura, mlhr, hmn :real
sexo :caractere
inicio
escreva(" Digite sua Altura: ")
leia(altura)
escreva(" Digite seu sexo: ")
leia(sexo)
hmn <-(72.7*altura)- 58
mlhr <- (62.1*altura)- 44.7
se (sexo = "masculino") entao
escreval (" O peso ideal � " ,hmn)
senao (sexo = "feminino") entao
escreval (" O peso ideal � " ,mlhr)
fimse
fimalgoritmo
