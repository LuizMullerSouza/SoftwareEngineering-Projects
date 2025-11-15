algoritmo "InversorDeVetor"

// Variáveis
var
   vet: vetor [1..70] de inteiro
   i: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Preenchendo o Vetor (70 posições) ---")
   para i <- 1 ate 70 passo 1 faca
      Escreva("Informe o ", i, "º valor: ")
      Leia(vet[i])
   fimpara

   // Saída de dados
   Escreval
   Escreval("--- Vetor - Ordem Inversa ---")
   para i <- 70 ate 1 passo -1 faca
      Escreval(vet[i])
   fimpara

   // Saída de dados
   Escreval
   Escreval("--- Vetor - Ordem Normal ---")
   para i <- 1 ate 70 passo 1 faca
      Escreval(vet[i])
   fimpara

// Fim da execução
fimalgoritmo

// Escreva um programa que leia valores em um vetor
// de 70 posições inteiras . Em seguida, exiba os
// elementos do vetor em ordem inversa e normal.