algoritmo "Questão 12"

var
nome:caractere
salario, iE, iF, nv1, nv2, nv3:real
inicio
escreval("Informe o Nome do funcionário:")
leia(nome)
escreval("Informe o salário:")
leia(salario)
se (salario < 5000)entao
   iE <- (salario*0.1)
   iF <- (salario*0.04)
   nv1 <- salario -(iE + iF)
   escreval(nome, " salario bruto é ", salario, " líquido é", nv1)
senao
   se(salario < 15000)entao
      iE <- (salario*0.2)
      iF <- (salario*0.06)
      nv2 <- salario - (iE + iF)
      escreval(nome, " salário bruto é ", salario, " líquido é", nv2)
   senao
      se (salario >= 15000)entao
         iE <- (salario*0.3)
         iF<-(salario*0.06)

         nv3 <- salario - (iE+iF)
         escreval(nome, " salário bruto é ", salario, " líquido é", nv3)
      fimse
   fimse
fimse
fimalgoritmo
