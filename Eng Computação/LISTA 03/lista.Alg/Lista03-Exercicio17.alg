algoritmo "Questão 17"
// Função :Informa em qual grupo de risco uma pessoa está, com dados a partir do peso e a idade
// Autor :Edson Júnio Frota da Silva
// Data : 02/11/2015
// Seção de Declarações
var
idade:inteiro
peso:real
inicio
escreva("Informe a idade: ")
leia(idade)
escreva("Informe o peso: ")
leia(peso)
se ((idade < 20) e (peso <= 60))entao
   escreval("GRUPO DE RISCO 9")
senao
   se ((idade < 20) e (peso > 60) e (peso <=90))entao
      escreval("GRUPO DE RISCO 8")
   senao
      se ((idade < 20) e (peso > 90))entao
         escreval ("GRUPO DE RISCO 7")
      senao
         se ((idade >= 20) e (idade <= 50) e (peso <= 60))entao
            escreval("GRUPO DE RISCO 6")
         senao
            se ((idade >= 20) e (idade <= 50) e (peso <= 90))entao
               escreval("GRUPO DE RISCO 5")
            senao
               se ((idade >= 20) e (idade <= 50) e (peso > 90))entao
                  escreval("GRUPO DE RISCO 4")
               senao
                  se ((idade > 50) e (peso <= 60))entao
                     escreval("GRUPO DE RISCO 3")
                  senao
                     se ((idade > 50) e (peso <= 90))entao
                        escreval("GRUPO DE RISCO 2")
                     senao
                        se ((idade > 50) e (peso > 90))entao
                           escreval("GRUPO DE RISCO 1")
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo
