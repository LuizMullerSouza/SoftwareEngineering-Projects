algoritmo "CopiaDeVetor"

// Variáveis
var
   vetA, vetB: vetor [1..10] de inteiro
   i: inteiro

// Início
inicio
   Escreval("--- Preenchendo o Vetor A ---")

   // Loop para entrada, leitura e processamento de dados
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° número: ")
      Leia(vetA[i])

      // Cópia do vetor A para o B
      vetB[i] <- vetA[i]
   fimpara

   Escreval
   Escreval("--- Valores copiados do vetor A para vetor B ---")

   // Loop para saída de dados do segundo vetor
   para i <- 1 ate 10 passo 1 faca
      Escreval(i, "° valor do vetor B: ", vetB[i])
   fimpara

// Fim da execução
fimalgoritmo

// Faça um algoritmo que copie o conteúdo
// de um vetor em um segundo vetor.