algoritmo "semnome"

var
tempoP, tempoG, D, D2:real
incs:inteiro
inicio
escreval("Digite o Tempo padr�o em minutos: ")
leia(tempoP)
escreval("Digite o tempo gasto pela equipe: ")
leia(tempoG)
escreval("Digite o numero de inscri��o: ")
leia(incs)
D <- tempoG - tempoP
se (D < 3) entao
   escreval(" 100 pnts para a equipe ", incs)
senao
   se ((D <= 3) e (D < 5)) entao
      escreval(" 80 pnts para equipe ", incs)
   senao
      se(D > 5) entao
         D2 <- 80-(D-5)/5
         escreval(D2, " pnts para a equie ", incs)
      fimse
   fimse
fimse
fimalgoritmo
