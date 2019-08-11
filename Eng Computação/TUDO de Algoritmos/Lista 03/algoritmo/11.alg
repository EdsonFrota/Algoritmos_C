algoritmo "semnome"

var
saldo, v1, v2, v3, v4:real
inicio
escreva("Digite o saldo médio: ")
leia(saldo)
se (saldo = 200)entao
   v1 <- saldo*0.05
   escreval("O seu saldo médio é de", saldo)
   escreval("O valor do crédito será de até R$", v1)
senao
   se (saldo > 4000)entao
      v2 <- saldo*0.2
      escreval("O seu saldo médio é de", saldo)
      escreval("O valor do crédito será de até R$", v2)
   senao
      se ((saldo <= 4000) e (saldo > 1000))entao
         v3 <- saldo*0.15
         escreval("O seu saldo médio é de", saldo)
         escreval("O valor do crédito será de até R$", v3)
      senao
         se ((saldo <= 1000) e (saldo > 200))entao
            v4 <- saldo*0.1
            escreval("O seu saldo médio é de", saldo)
            escreval("O valor do crédito será de até R$", v4)
         fimse
      fimse
   fimse
fimse
fimalgoritmo
