algoritmo "LeituraEscritaVetor"

// Variáveis
var
   vet: vetor [1..10] de inteiro
   i: inteiro

// Início
inicio
   // Loop para entrada e leitura de dados no vetor
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° número: ")
      Leia(vet[i])
   fimpara

   Escreval
   Escreval("--- Números Digitados ---")

   // Loop para saída de dados
   para i <- 1 ate 10 passo 1 faca
      Escreval(i, "° número: ", vet[i])
   fimpara

// Fim da execução
fimalgoritmo

// Escreva um algoritmo que leia 10 números inteiros
// e os armazene em um vetor. Em seguida, escreva os
// números lidos na tela.