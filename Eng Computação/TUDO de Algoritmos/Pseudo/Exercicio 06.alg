algoritmo "Qust�o 06"
// Fun��o :
// Autor :
// Data : 18/10/2015
// Se��o de Declara��es 
var
   salario, grtf, imposto,nvsl, dstc : real
inicio
escreva ("Informe o seu sal�rio: ")
leia (salario)
grtf <- salario * 0.05
escreval (" A sua gratifica��o ser� de ", grtf)
imposto <- salario * 0.07
escreval (" Voce ir� pagar de imposto ", imposto)
dstc <- salario + imposto
nvsl <- dstc + grtf
escreval (" Seu novo sal�rio ser� de R$ ", nvsl)
 
fimalgoritmo
