algoritmo "Questão 04"
// Função :Informa se um aluno foi Aprovado ou Reprovado a partir de suas notas
// Autor :Edson Júnior Frota da Silva
// Data : 25/10/2015
// Seção de Declarações
var
p1, p2, p3, p4, t1, t2, t3, t4, mp, mt, mf :real
inicio
escreval(" Digite o valor das suas 4 notas de prova: ")
leia (p1)
leia (p2)
leia (p3)
leia (p4)
escreval(" Digite as 4 notas de trabalho: ")
leia (t1)
leia (t2)
leia (t3)
leia (t4)
mp <- (p1+p2+p3+p4) / 4
mt <- (t1+t2+t3+t4) / 4
mf <- 0.8 * mp + 0.2 * mt
se (mf >= 6.0) entao
   escreval ( " APROVADO ")
senao (mf < 6.0) entao
   escreval (" REPROVADO " )
fimse
fimalgoritmo
