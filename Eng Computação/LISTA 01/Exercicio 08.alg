algoritmo "Exercicio 08"
// Função :Calcula e mostra a quantidade de ração ao final mde 5 dias
// Autor : Edson Júnior Frota da Silva
// Data : 18/10/2015

var
peso, qntrc, gt, resta, divl : real
inicio
escreva (" Digite o peso do saco de ração: ")     // ração em quilogramas
leia (peso)
escreva (" Digite a quantidade de ração fornecida para cada gato em gramas: ") // em gramas
leia (qntrc)
gt <- qntrc * qntrc
escreva ( gt)
resta <- (peso - gt)
divl <- resta / 5
escreva (" Ao final de 5 dias restará de ração ", divl ) // em quilogramas
escreva (" quilos.")
fimalgoritmo
