algoritmo "LocalizadorDeMultiplos"

// Variáveis
var
   i: inteiro

// Início
inicio
   Escreval("--- Múltiplos de 5 de 1 a 500 ---")

   // Loop para percorrer os 500 números
   para i <- 1 ate 500 passo 1 faca

      // Lógica condicional para encontrar os múltiplos de 5
      se (i mod 5 = 0) entao
         Escreval(i, " é múltiplo de 5!")
      fimse

   fimpara

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que imprima
// todos os números múltiplos de 5, no intervalo
// fechado de 1 a 500.