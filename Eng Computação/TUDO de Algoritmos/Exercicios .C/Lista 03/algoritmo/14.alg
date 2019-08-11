algoritmo "quentao 14"
var
so,sb,sl,d,tv42,tv29,c1,c2:real
name:caractere
inicio
escreval("digite o seu nome")
leia(name)
escreval("digite seu salario fixo")
leia (so)
escreval ("numero de vendas de tv de 29 polegadas")
leia(tv29)
escreval("numero de vendas de tv de 42 polegadas")
leia (tv42)
se (tv42>=10)entao
c1<-20*tv42
senao
c1<-10*tv42
fimse
se (tv29>=20)entao
c2<-5*tv29
senao
c2<-3*tv29
fimse
escreval("",so+c1+c2)
sb<-((92/100)*so)+(c1+c2)
se (sb<=1300) entao
sl <-sb
senao se(sb>1300)
sl<- (95/100)(sb)
senao
escreval("eu fiz algo errado")
fimse

escreval("caro,", name ,",seu salario esse mes sera de:",sl)
fimalgoritmo