algoritmo "Quest�o 18"
var
H, He, Fm,G :real
inicio
escreva ("Informe a quantidade de horas extra em minutos:")
leia (He)
escreva ("Informe a quantidade de faltas em minutos:")
leia  (Fm)
H <- He - (2/3)*Fm
se (H>2400)entao
G<-500
senao
 se(H>1800)entao
  G<-400

senao
se(H>1200)  entao
    G<-300
 senao
 se (H>600) entao
  G<-200
 senao
se(H<=600) entao
       G<-100
fimse
fimse
fimse
fimse

fimse
escreval ("A gratifica��o ser� de",G)
fimalgoritmo