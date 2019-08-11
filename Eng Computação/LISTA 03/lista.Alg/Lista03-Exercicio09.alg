algoritmo "Questão 09"
// Função :Informa o cargo e o percentual de aumento a partir do codigo do funcionário
// Autor : Edson Júnior Frota da Silva
// Data : 01/11/2015
// Seção de Declarações
var
codigo:inteiro
inicio
escreval("CODIGÓS DE [1] A [5]")
escreva("Digite o código do funcionário: ")
leia(codigo)
se (codigo = 1)entao
   escreval(" O cargo é ESCRITURÁRIO, o percentual de aumento é de 50%")
senao
   se (codigo = 2)entao
      escreval(" O cargo é SECRETÁRIO, o percentual de aumento é de 35%")
   senao
      se ( codigo = 3)entao
         escreval(" O cargo é CAIXA, o percentual de aumento é de 20%")
      senao
         se (codigo = 4) entao
            escreval(" O cargo é GERENTE, o percentual de aumento é de 10%")
         senao
            se (codigo = 5) entao
               escreval(" O cargo é DIRETOR, o percentual de aumento é de 0%")
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo
