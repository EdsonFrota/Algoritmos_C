algoritmo "Questão 14"
// Função :Calcula Salario final de um vendendor de eletrodomésticos
// Autor :Edson Júnior Frota da Silva
// Data : 02/11/2015
// Seção de Declarações
var
tv29, tv42:inteiro
salario,sl, sb, cm1, cm2, cm3, cm4:real
nome:caractere
inicio
escreval("Digite o nome do Funcionário:")
leia(nome)
escreval("Digite o salário do Funcionário:")
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
escreval( nome ,",seu salario será de:",sl)
fimalgoritmo
