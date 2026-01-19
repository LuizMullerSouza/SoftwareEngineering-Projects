algoritmo "InversorDeVetor"

// Variáveis
var
   vet: vetor [1..5] de inteiro
   i: inteiro

// Início
inicio
   Escreval("--- Preenchendo o Vetor ---")

   // Entrada e leitura de dados
   para i <- 1 ate 5 passo 1 faca
      Escreva("Digite o ", i, "º valor: ")
      Leia(vet[i])
   fimpara
   Escreval
   
   Escreval("--- Elementos do Vetor ---")

   // Saída de dados
   para i <- 1 ate 5 passo 1 faca
      Escreva(vet[i], " ")
   fimpara

   Escreval
   Escreval
   Escreval("--- Elementos do Vetor em Ordem Inversa ---")

   para i <- 5 ate 1 passo -1 faca
      Escreva(vet[i], " ")
   fimpara
   Escreval

// Fim da execução
fimalgoritmo

// Escreva um programa que leia valores em um vetor de 5 posições.
// Escrever os elementos do vetor e após escrever os elementos na
// ordem inversa.