algoritmo "Quest�o 06"

var
n1, n2, n3, n4:inteiro
inicio
escreval("Digite 3 n�mero em ordem crescente: ")
leia(n1)
leia(n2)
leia(n3)
escreval("Digite um quarto n�mero:")
leia(n4)
se (n4>n3)entao
escreval("a ordem crescente �:",n1,n2,n3,n4)
senao se (n4>n2)
escreval("a ordem crescente �:",n1,n2,n4,n3)
senao se(n4>n1)
escreval ("a ordem crescente �:",n1,n4,n2,n3)
senao
escreval("a ordem crescente �:",n4,n1,n2,n3)
fimse
fimalgoritmo

