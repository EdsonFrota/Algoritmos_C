algoritmo "Quest�o 06"
// Fun��o :Recebe numeros em ordem crescente e imprime-os em ordem decrescente
// Autor :Edson J�nior frota da Silva
// Data : 02/11/2015
// Se��o de Declara��es
var
n1, n2, n3, n4:inteiro
inicio
escreval("Digite 3 n�mero em ordem crescente: ")
leia(n1)
leia(n2)
leia(n3)
escreval("Digite um quarto n�mero:")
leia(n4)
se ((n1 < n2) e (n2 < n3) e (n3 < n4)) entao
   escreval(n4, n3, n2, n1)
senao
   se ((n2 > n3) e (n1 > n4) e (n3 > n1)) entao
      escreval(n2, n3, n1, n4)
   senao
      se ((n3 > n1) e (n1 > n2) e (n4 < n1)) entao
         escreval(n3, n1, n2, n4)
      senao
         se ((n1 > n4) e (n4 > n3) e (n3 > n2)) entao
            escreval (n1, n4, n3, n2)
         senao
            se ((n4 > n1 ) e (n1 > n2) e (n2 > n3)) entao
               escreval(n4, n1, n2, n3)
            senao
               se ((n3 > n2) e (n2 > n1) e (n1 > n4)) entao
                  escreval(n3, n2, n1, n4)
               senao
                  se ((n2 > n3) e (n3 > n4) e (n1 < n4)) entao
                     escreval(n2, n3, n4, n1)
                  senao
                     se ((n1 > n2) e (n2 < n3) e (n4 > n1)) entao
                        escreval(n3, n4, n1, n2)
                     senao
                        se ((n4 < n3) e (n4 > n2) e (n2 > n1)) entao
                           escreval (n3, n4, n2, n1)
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse

fimalgoritmo

