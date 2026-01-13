algoritmo "EncontradorDeImpares"

// Variáveis
var
   i: inteiro

// Início
inicio
   Escreval("--- Ímpares entre 0 e 20 ---")

   para i <- 0 ate 20 passo 1 faca
      // Lógica condicional para encontrar números ímpares
      se (i mod 2 <> 0) entao
         Escreval("Número ímpar encontrado: ", i)
      fimse
   fimpara

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que apresente todos os valores
// numéricos inteiros ímpares situados na faixa de 0 a 20.