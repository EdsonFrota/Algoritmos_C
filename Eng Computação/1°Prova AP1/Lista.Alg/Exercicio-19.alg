algoritmo "Exercicio 19"
// Função :Calcula os valores de uma equação de 2°grau
// Autor :Edson Júnior Frota da Silva
// Data : 15/11/2015
// Seção de Declarações
var
a,b,c,d,x1,x2:real
inicio
escreval("Digite os valores de a, b, c:")
leia(a)
leia(b)
leia(c)
d <- b^2 - 4*a*c
se (d < 0)entao
   escreval("NÃO TEM RAÍZES REAIS")
senao
   se (d > 0) entao

      x1 <- (-b + raizq(d))/2*a
      x2 <- (-b - raizq(d))/2*a
      escreval("x1= ", x1:2:1)
      escreval("x2= ", x2:2:1)
   fimse
fimse
fimalgoritmo
