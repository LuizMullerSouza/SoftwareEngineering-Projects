algoritmo "EncontradorDePares"

// Variáveis
var
   i: inteiro

// Início
inicio
   Escreval("--- Contagem Regressiva de Pares de 600 a 1 ---")

   para i <- 600 ate 1 passo -1 faca

      // Lógica condicional para encontrar os números pares
      se (i mod 2 = 0) entao
         Escreval("Número par encontrado: ", i)
      fimse

   fimpara

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que apresente todos
// os números pares no intervalo de 600 a 1