algoritmo "Qustão 06"
// Função :
// Autor :
// Data : 18/10/2015
// Seção de Declarações 
var
   salario, grtf, imposto,nvsl, dstc : real
inicio
escreva ("Informe o seu salário: ")
leia (salario)
grtf <- salario * 0.05
escreval (" A sua gratificação será de ", grtf)
imposto <- salario * 0.07
escreval (" Voce irá pagar de imposto ", imposto)
dstc <- salario + imposto
nvsl <- dstc + grtf
escreval (" Seu novo salário será de R$ ", nvsl)
 
fimalgoritmo
