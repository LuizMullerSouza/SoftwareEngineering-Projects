algoritmo "AdicaoDeMatrizes"

// Variáveis
var
   matrizA, matrizB, matrizSoma: vetor[1..5, 1..5] de inteiro
   i, j: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Leitura da Matriz A ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("A[", i, ",", j, "]: ")
         Leia(matrizA[i,j])
      fimpara
   fimpara

   Escreval

   // Entrada de dados
   Escreval("--- Leitura da Matriz B ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("B[", i, ",", j, "]: ")
         Leia(matrizB[i,j])
      fimpara
   fimpara

   Escreval

   // Processamento e saída de dados
   Escreval("--- Matriz Soma (A + B) ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         matrizSoma[i,j] <- matrizA[i,j] + matrizB[i,j]

         Escreva(matrizSoma[i,j], "   ")
      fimpara
      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Faça um algoritmo para somar duas matrizes