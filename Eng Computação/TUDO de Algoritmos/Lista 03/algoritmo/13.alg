algoritmo "Quest�o 13"

var
a, b, c, x, codigo :inteiro
y1,y2, y3, y4 :real
inicio
escreva("Digite 4 valores:")
leia(a)
leia(b)
leia(c)
leia(x)

escreval("Informe o c�digo da f�rmula de [1] a [4]:")
leia(codigo)
se (codigo=1)e(b*x-c=0)entao
escreval ("divisao por zero")
fimalgoritmo
fimse
se (codigo=3)e(x=0) entao
escreval ("divisao por zero")
fimalgoritmo
fimse

se (codigo = 1)entao
   y1 <- (a*x^2) - b*x + c/(b*x - c)
   escreval(y1)
senao
   se (codigo = 2) entao
      y2 <- a*x^2 + b*x + c
      escreval(y2)
   senao
      se (codigo = 3) entao
         y3 <- (a*x + c*x^3)/ 4*x
         escreval(y3)
      senao
         se (codigo = 4) entao
            y4 <- b*x^4 - 1
            escreval(y4)
         fimse
      fimse
   fimse
fimse
fimalgoritmo
