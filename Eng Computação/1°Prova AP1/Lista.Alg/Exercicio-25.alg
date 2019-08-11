algoritmo "Exercicio 25"
// Função :Informa imc de um usuário
// Autor :Edson Júnior Frota da Silva
// Data : 15/11/2015
// Seção de Declarações
var
   peso, altura, imc:real
inicio
   escreval("Informe o peso:")
   leia(peso)
   escreval("Informe a altura:")
   leia(altura)
   imc <- peso/(altura^2)
   escreval("IMC= ", imc:2:2)
   se (imc < 18.5) entao
      escreval("ABAIXO DO PESO")
   senao
      se ((imc >= 18.5) e (imc < 25.0))entao
         escreval("PESO NORMAL")
      senao
         se ((imc >= 25.0) e (imc < 30.0))entao
            escreval("ACIMA DO PESO")
         senao
            se (imc > 30.0)entao
               escreval("OBESO")
            fimse
         fimse
      fimse
   fimse
fimalgoritmo
