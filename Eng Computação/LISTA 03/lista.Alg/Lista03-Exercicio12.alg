algoritmo "Questão 12"
// Função :Informa o salario liquido corrigido
// Autor :Edson Júnior Frota da Silva
// Data : 01/11/2015
// Seção de Declarações
var
nome:caractere
salario, iE, iF, nv1, nv2, nv3:real
inicio
escreval("Informe o Nome do funcionário:")
leia(nome)
escreval("Informe o salário:")
leia(salario)
se (salario < 5000)entao
   iE <- (100*0.1)
   iF <- (100*0.04)
   nv1 <- salario -(iE + iF)
   escreval(nome, " salario bruto é ", salario, " líquido é", nv1)
senao
   se(salario < 15000)entao
      iE <- (100*0.2)
      iF <- (100*0.06)
      nv2 <- salario - (iE + iF)
      escreval(nome, " salário bruto é ", salario, " líquido é", nv2)
   senao
      se (salario >= 15000)entao
         iE <- (100*0.3)
         nv3 <- salario - iE
         escreval(nome, " salário bruto é ", salario, " líquido é", nv3)
      fimse
   fimse
fimse
fimalgoritmo
