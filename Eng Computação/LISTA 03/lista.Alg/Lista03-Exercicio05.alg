algoritmo "semnome"
// Função :
// Autor :
// Data : 02/11/2015
// Seção de Declarações
var
n1, n2, operacao:real
inicio
escreval("**************CALCULADORA*********************")
 escreva("")
      escreval("")

escreval("OPERAÇÕES DISPONÍVEIS: \/")
 escreval("")
      escreval("")
escreval("ADIÇÃO{1}:::SUBTRAÇÃO{2}:::MULTIPLICAÇÃO{3}:::DIVISÃO{4}:::")
 escreval("")
      escreval("")
escreval("Informe a operação desejada:")
leia(operacao)
escreval("Informe 2 números: ")
leia(n1)
leia(n2)
se (operacao = 1)entao
   escreval (" O resultado da ADIÇÃO é", n1+n2)
senao
   se (operacao = 2)entao
      escreval (" O resultado da SUBTRAÇÃO é", n1-n2)
   senao
      se (operacao = 3)entao
         escreval(" O resultado da MULTIPLICAÇÃO é", n1*n2)
      senao
         se (operacao = 4)entao
            escreval(" O resultado da DIVISÃO é", n1/n2)
         fimse
      fimse
   fimse
fimse
 escreval("")
      escreval("")
fimalgoritmo
