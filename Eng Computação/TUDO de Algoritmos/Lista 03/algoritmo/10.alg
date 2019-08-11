algoritmo "Questão 10"

var
idade:inteiro
inicio
escreva("Informe a idade da pessoa: ")
leia(idade)
se (idade <=2) entao
   escreval("RESCÉM- NASCIDO")
senao
   se((idade >=3) e (idade<=11))entao
      escreval("CRIANÇA")
   senao
      se ((idade >=12) e (idade<=19))entao
         escreval("ADOLESCENTE")
      senao
         se ((idade >=20) e (idade<=55))entao
            escreval("ADULTO")
         senao
            se (idade > 55) entao
               escreval("IDOSO")
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo
