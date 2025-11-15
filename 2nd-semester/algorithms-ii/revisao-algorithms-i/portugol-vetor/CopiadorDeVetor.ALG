algoritmo "CopiadorDeVetor"

// Variáveis
var
   vet1, vet2: vetor [1..10] de inteiro
   i: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Preenchendo o Vetor Original ---")
   para i <- 1 ate 10 passo 1 faca
      Escreva("Informe o ", i, "º valor: ")
      Leia(vet1[i])
   fimpara

   // Processamento
   para i <- 1 ate 10 passo 1 faca
      vet2[i] <- vet1[i]
   fimpara

   // Saída de dados
   Escreval
   Escreval("--- Conteúdo do Vetor Copiado (Vetor 2) ---")
   para i <- 1 ate 10 passo 1 faca
      Escreval("Posição ", i, ": ", vet2[i])
   fimpara

// Fim da execução
fimalgoritmo

// Faça um algoritmo que copie o conteúdo
// de um vetor em um segundo vetor;