algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 02/11/2015
// Se��o de Declara��es
var
n1, n2, operacao:real
inicio
escreval("**************CALCULADORA*********************")
 escreva("")
      escreval("")

escreval("OPERA��ES DISPON�VEIS: \/")
 escreval("")
      escreval("")
escreval("ADI��O{1}:::SUBTRA��O{2}:::MULTIPLICA��O{3}:::DIVIS�O{4}:::")
 escreval("")
      escreval("")
escreval("Informe a opera��o desejada:")
leia(operacao)
escreval("Informe 2 n�meros: ")
leia(n1)
leia(n2)
se (operacao = 1)entao
   escreval (" O resultado da ADI��O �", n1+n2)
senao
   se (operacao = 2)entao
      escreval (" O resultado da SUBTRA��O �", n1-n2)
   senao
      se (operacao = 3)entao
         escreval(" O resultado da MULTIPLICA��O �", n1*n2)
      senao
         se (operacao = 4)entao
            escreval(" O resultado da DIVIS�O �", n1/n2)
         fimse
      fimse
   fimse
fimse
 escreval("")
      escreval("")
fimalgoritmo
