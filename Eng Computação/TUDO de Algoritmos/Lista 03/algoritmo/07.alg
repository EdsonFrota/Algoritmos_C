algoritmo "Quest�o 07"

var
un, dz, ct, nm:inteiro
dze:real
inicio
escreva("Digite um n�mero com 3 casa: ")
leia(nm)
un <- nm % 10
dz <- (nm % 100) -un
dze<-dz/10

escreval("a dezena eh",dze)
fimalgoritmo
