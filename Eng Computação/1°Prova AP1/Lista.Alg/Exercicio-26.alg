algoritmo "Exercicio 26"
// Fun��o :A partir do c�digo fornecido informa, o cargo e o percentual de aumento de um funcion�rio
// Autor :Edson J�nior Frota da Silva
// Data : 15/11/2015
// Se��o de Declara��es
var
cargo:caractere
inicio
escreva("Digite o c�digo do cargo do funcion�rio:")
leia(cargo)
escolha (cargo)
caso "1"
   escreval("Cargo, ESCRITUR�RIO, aumento 50%")
caso "2"
   escreval("Cargo, SECRET�RIO, aumento 35%")
caso "3"
   escreval("Cargo, CAIXA, aumento 20%")
caso "4"
   escreval("Cargo, GERENTE, aumento 10%")
caso "5"
   escreval("Cargo, DIRETOR, aumento 0%")
outrocaso
   escreval("C�DIGO INV�LIDO")
fimescolha

fimalgoritmo
