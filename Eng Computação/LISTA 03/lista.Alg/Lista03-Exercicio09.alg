algoritmo "Quest�o 09"
// Fun��o :Informa o cargo e o percentual de aumento a partir do codigo do funcion�rio
// Autor : Edson J�nior Frota da Silva
// Data : 01/11/2015
// Se��o de Declara��es
var
codigo:inteiro
inicio
escreval("CODIG�S DE [1] A [5]")
escreva("Digite o c�digo do funcion�rio: ")
leia(codigo)
se (codigo = 1)entao
   escreval(" O cargo � ESCRITUR�RIO, o percentual de aumento � de 50%")
senao
   se (codigo = 2)entao
      escreval(" O cargo � SECRET�RIO, o percentual de aumento � de 35%")
   senao
      se ( codigo = 3)entao
         escreval(" O cargo � CAIXA, o percentual de aumento � de 20%")
      senao
         se (codigo = 4) entao
            escreval(" O cargo � GERENTE, o percentual de aumento � de 10%")
         senao
            se (codigo = 5) entao
               escreval(" O cargo � DIRETOR, o percentual de aumento � de 0%")
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo
