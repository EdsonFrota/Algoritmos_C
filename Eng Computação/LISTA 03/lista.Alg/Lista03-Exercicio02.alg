algoritmo "Questão 02"
// Função :Informa as raízes de uma equação de 2° grau
// Autor :Edson Júnior Frota da Silva
// Data : 02/11/2015
// Seção de Declarações
var
a, b, c, delta, x1, x2:real
inicio
escreva("Digite os coeficientes A, B, C da equação: ")
leia(a)
leia(b)
leia(c)
delta <- b^2 - 4*a*c
se (delta < 0)entao
   escreval("NÃO TEM RAIZES")
senao
   se (delta > 0) entao
      raizq(delta)
      x1 <- (-b + raizq(delta))/2*a
      x2 <- (-b - raizq(delta))/2*a
      escreval("AS RAÍZES SÃO", x1,x2)
   fimse
fimse
fimalgoritmo
