algoritmo "Quest�o 14"
// Fun��o :Calcula Salario final de um vendendor de eletrodom�sticos
// Autor :Edson J�nior Frota da Silva
// Data : 02/11/2015
// Se��o de Declara��es
var
tv29, tv42:inteiro
salario,sl, sb, cm1, cm2, cm3, cm4:real
nome:caractere
inicio
escreval("Digite o nome do Funcion�rio:")
leia(nome)
escreval("Digite o sal�rio do Funcion�rio:")
leia(salario)
escreval("Quantidade de tv's 29pld vendidas:")
leia(tv29)
escreval("Quantidade de tv's 42pld vendidas:")
leia(tv42)
se (tv42>=10)entao
cm1 <-20*tv42
senao
cm1<-10*tv42
fimse
se (tv29>=20)entao
cm2<-5*tv29
senao
cm2<-3*tv29
fimse
escreval("",salario+cm1+cm2)
sb<-((92/100)*salario)+(cm1+cm2)
se (sb<=1300) entao
sl <-sb
senao se(sb>1300)
sl<- (95/100)(sb)
senao
escreval("eu fiz algo errado")
fimse
escreval( nome ,",seu salario ser� de:",sl)
fimalgoritmo
