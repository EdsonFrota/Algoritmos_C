algoritmo "Quest�o 12"
// Fun��o :Informa o salario liquido corrigido
// Autor :Edson J�nior Frota da Silva
// Data : 01/11/2015
// Se��o de Declara��es
var
nome:caractere
salario, iE, iF, nv1, nv2, nv3:real
inicio
escreval("Informe o Nome do funcion�rio:")
leia(nome)
escreval("Informe o sal�rio:")
leia(salario)
se (salario < 5000)entao
   iE <- (100*0.1)
   iF <- (100*0.04)
   nv1 <- salario -(iE + iF)
   escreval(nome, " salario bruto � ", salario, " l�quido �", nv1)
senao
   se(salario < 15000)entao
      iE <- (100*0.2)
      iF <- (100*0.06)
      nv2 <- salario - (iE + iF)
      escreval(nome, " sal�rio bruto � ", salario, " l�quido �", nv2)
   senao
      se (salario >= 15000)entao
         iE <- (100*0.3)
         nv3 <- salario - iE
         escreval(nome, " sal�rio bruto � ", salario, " l�quido �", nv3)
      fimse
   fimse
fimse
fimalgoritmo
