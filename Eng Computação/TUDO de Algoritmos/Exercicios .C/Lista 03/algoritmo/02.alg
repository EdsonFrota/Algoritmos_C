algoritmo "02"

var

a, b, c, delta, x1, x2:real

inicio

escreva("Digite os coeficientes A, B, C da equa��o: ")


leia(a)

leia(b)

leia(c)

delta <- b^2 - 4*a*c

se (delta < 0)entao

   escreval("N�O TEM RAIZES")

senao

   se (delta > 0) entao

      raizq(delta)

      x1 <- (-b + raizq(delta))/2*a

      x2 <- (-b - raizq(delta))/2*a

      escreval("AS RA�ZES S�O", x1,x2)

   fimse


fimse

fimalgoritmo
