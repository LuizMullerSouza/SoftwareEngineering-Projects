algoritmo "MultiplicarElementosVetor"

// Variáveis
var
   vet1, vet2, vet3: vetor [1..10] de inteiro
   i: inteiro

// Início
inicio
   // Entrada e processamento
   Escreval("--- Preenchendo os Vetores ---")
   para i <- 1 ate 10 passo 1 faca
      Escreva("1º Vetor - Informe o ", i, "º valor: ")
      Leia(vet1[i])
      Escreva("2º Vetor - Informe o ", i, "º valor: ")
      Leia(vet2[i])

      // Cálculo do 3º vetor
      vet3[i] <- vet1[i] * vet2[i]
      Escreval // Pula linha
   fimpara

   // Saída de dados
   Escreval
   Escreval("--- Vetor Resultante (Multiplicação) ---")
   para i <- 1 ate 10 passo 1 faca
      Escreval("Posição [", i, "]: ", vet3[i])
   fimpara

// Fim da execução
fimalgoritmo

// Escreva um algoritmo que leia dois vetores de 10 posições
// e faça a multiplicação dos elementos de mesmo índice,
// colocando o resultado em um terceiro vetor. Mostre o vetor
// resultante