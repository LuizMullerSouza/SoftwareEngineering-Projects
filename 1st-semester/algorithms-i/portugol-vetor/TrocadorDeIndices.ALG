algoritmo "TrocadorDeIndices"

// Variáveis
var
   vet: vetor [1..16] de inteiro
   aux, i: inteiro

// Início
inicio
   Escreval("--- Preenchendo o Vetor ---")

   // Entrada e leitura de dados
   para i <- 1 ate 16 passo 1 faca
      Escreva("Digite o ", i, "º valor: ")
      Leia(vet[i])
   fimpara

   Escreval
   Escreval("Realizando a troca das 8 posições...")

   // Lógica condicional para troca
   para i <- 1 ate 8 passo 1 faca
      aux <- vet[i]
      vet[i] <- vet[i+8]
      vet[i+8] <- aux
   fimpara

   Escreval("Troca realizada com sucesso!")
   Escreval
   Escreval("--- Vetor Trocado ---")

   // Exibição do resultado
   para i <- 1 ate 16 passo 1 faca
      Escreva(vet[i], " ")
   fimpara
   Escreval

// Fim da execução
fimalgoritmo

// Leia um vetor de 16 posições e troque os 8 primeiros
// valores pelos 8 últimos e vice-e-versa. Escreva ao
// final o vetor obtido.