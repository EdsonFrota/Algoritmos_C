algoritmo "semnome"

var
n1, n2, operacao:inteiro
inicio
escreval("CALCULADORA")
 escreva("")
      escreval("")

escreval("OPERA��ES:")
 escreval("")
      escreval("")
escreval("ADI��O{1}:::SUBTRA��O{2}:::MULTIPLICA��O{3}:::DIVIS�O{4}:::")
 escreval("")
      escreval("")
escreval("digite a opera��o:")
leia(operacao)
escreval("digite 2 n�meros: ")
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
