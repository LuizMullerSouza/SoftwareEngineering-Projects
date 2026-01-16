algoritmo "MultiplicacaoDeVetores"

// Variáveis
var
   vetA, vetB, vetResultado: vetor [1..10] de inteiro
   i: inteiro

// Início
inicio
   Escreval("--- Preenchendo o Vetor A ---")
   // Entrada e leitura de dados do primeiro vetor
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° valor: ")
      Leia(vetA[i])
   fimpara

   Escreval
   Escreval("--- Preenchendo o Vetor B ---")
   // Entrada e leitura de dados do segundo vetor
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° valor: ")
      Leia(vetB[i])
   fimpara

   Escreval
   Escreval("--- Resultado do Vetor Multiplicador ---")

   // Loop para cálculo e exibição do resultado
   para i <- 1 ate 10 passo 1 faca
      vetResultado[i] <- vetA[i] * vetB[i]
      Escreval("Posição [", i, "] = ", vetResultado[i])
   fimpara

// Fim da execução
fimalgoritmo

// Escreva um algoritmo que leia dois vetores de 10
// posições e faça a multiplicação dos elementos de
// mesmo índice, colocando o resultado em um terceiro
// vetor. Mostre o vetor resultante.