algoritmo "Quest�o 16"

var
np:inteiro
nome:caractere
s1, s2, s3:real
inicio
escreva("Digite o nome do funcion�rio: ")
leia(nome)
escreva("Quantidade de pe�as produzidas: ")
leia(np)
se (np <= 30) entao
   escreval(nome, " produziu", np , " pe�as, classe [A]")
   escreval("seu salario vai ser 788")
senao
   se ((np > 30) e (np <= 35))entao
      s1 <- 788 *( 3/100*(np-30))
      escreval(nome, " produziu", np , " pe�as , classe[B]")
      escreval("seu salario vai ser", s1+788)
   senao
      se ((np > 35) e (np <= 40)) entao
         s2 <- 788 * (5/100*(np-30))
         escreval(nome, " produziu", np ," pe�as, classe[C]")
         escreval("seu salario vai ser", s2+788)
      senao
         se (np > 40)entao
            s3 <- 788 * (10/100*(np-30))
            escreval(nome, " produziu", np , " pe�as, classe[D]")
            escreval("seu salario vai ser", s3+788)
         fimse
      fimse
   fimse
fimse
fimalgoritmo
