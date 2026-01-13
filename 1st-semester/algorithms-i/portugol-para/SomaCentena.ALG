algoritmo "SomaCentena"

// Variáveis
var
   soma, i: inteiro

// Início
inicio
   soma <- 0

   // Loop para escrever os 100 números
   para i <- 1 ate 100 passo 1 faca
      Escreval("Número atual: ", i)

      // Acumulação dos valores
      soma <- soma + i
   fimpara

   // Exibição do resultado
   Escreval()
   Escreval("Soma de todos os valores: ", soma)

fimalgoritmo

// Criar um algoritmo que imprima todos
// os números de 1 até 100 e a soma deles