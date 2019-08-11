algoritmo "Exercicio 21"
// Função : Informa o tipo de eleitor a partir de sua idadeq
// Autor : Edson Júnior Frota da Silva
// Data : 15/11/2015
// Seção de Declarações
var
idade:inteiro
inicio
escreval("Informe a idade do eleitor:")
leia(idade)
se ((idade >= 16) e (idade <= 17))entao
   escreval("FACULTATIVO")
senao
   se ((idade >= 18) e (idade <= 65))entao
      escreval("OBRIGATÓRIO")
   senao
      se (idade > 65) entao
         escreval("DISPENSADO")
      fimse
   fimse
fimse
fimalgoritmo
