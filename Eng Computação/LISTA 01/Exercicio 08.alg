algoritmo "Exercicio 08"
// Fun��o :Calcula e mostra a quantidade de ra��o ao final mde 5 dias
// Autor : Edson J�nior Frota da Silva
// Data : 18/10/2015

var
peso, qntrc, gt, resta, divl : real
inicio
escreva (" Digite o peso do saco de ra��o: ")     // ra��o em quilogramas
leia (peso)
escreva (" Digite a quantidade de ra��o fornecida para cada gato em gramas: ") // em gramas
leia (qntrc)
gt <- qntrc * qntrc
escreva ( gt)
resta <- (peso - gt)
divl <- resta / 5
escreva (" Ao final de 5 dias restar� de ra��o ", divl ) // em quilogramas
escreva (" quilos.")
fimalgoritmo
