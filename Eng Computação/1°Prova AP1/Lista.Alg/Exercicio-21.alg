algoritmo "Exercicio 21"
// Fun��o : Informa o tipo de eleitor a partir de sua idadeq
// Autor : Edson J�nior Frota da Silva
// Data : 15/11/2015
// Se��o de Declara��es
var
idade:inteiro
inicio
escreval("Informe a idade do eleitor:")
leia(idade)
se ((idade >= 16) e (idade <= 17))entao
   escreval("FACULTATIVO")
senao
   se ((idade >= 18) e (idade <= 65))entao
      escreval("OBRIGAT�RIO")
   senao
      se (idade > 65) entao
         escreval("DISPENSADO")
      fimse
   fimse
fimse
fimalgoritmo
