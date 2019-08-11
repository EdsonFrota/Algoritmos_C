algoritmo "Exercicio 26"
// Função :A partir do código fornecido informa, o cargo e o percentual de aumento de um funcionário
// Autor :Edson Júnior Frota da Silva
// Data : 15/11/2015
// Seção de Declarações
var
cargo:caractere
inicio
escreva("Digite o código do cargo do funcionário:")
leia(cargo)
escolha (cargo)
caso "1"
   escreval("Cargo, ESCRITURÁRIO, aumento 50%")
caso "2"
   escreval("Cargo, SECRETÁRIO, aumento 35%")
caso "3"
   escreval("Cargo, CAIXA, aumento 20%")
caso "4"
   escreval("Cargo, GERENTE, aumento 10%")
caso "5"
   escreval("Cargo, DIRETOR, aumento 0%")
outrocaso
   escreval("CÓDIGO INVÁLIDO")
fimescolha

fimalgoritmo
