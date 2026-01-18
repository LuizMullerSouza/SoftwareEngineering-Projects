algoritmo "SomadorDeMatrizes"

// Variáveis
var
   matA, matB, matSoma: vetor [1..5, 1..5] de inteiro
   i, j: inteiro

// Início
inicio
   Escreval("--- Preenchendo a Matriz A ---")

   // Entrada e leitura de dados da matriz A
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("Linha ", i, " - Coluna ", j, ": ")
         Leia(matA[i,j])
      fimpara
   fimpara

   Escreval("Matriz A preenchida com sucesso!")
   Escreval
   Escreval("--- Preenchendo a Matriz B ---")

   // Entrada e leitura de dados da matriz B
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("Linha ", i, " - Coluna ", j, ": ")
         Leia(matB[i,j])
      fimpara
   fimpara

   Escreval("Matriz B preenchida com sucesso!")
   Escreval
   Escreval("Calculando a soma das matrizes...")
   Escreval("--- Resultado da Soma ---")

   // Cálculo e exibição do resultado
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         matSoma[i,j] <- matA[i,j] + matB[i,j]
         Escreval("Posição [", i, ",", j, "] = ", matSoma[i,j])
      fimpara
   fimpara

// Fim da execução
fimalgoritmo

// Faça um algoritmo para somar duas matrizes.