algoritmo "OperacoesMatriciais"

// Variáveis
var
   matM, matN, matSoma, matDif: vetor[1..4, 1..4] de inteiro
   i, j: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Leitura da Matriz M ---")
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         Escreva("M[", i, ",", j, "]: ")
         Leia(matM[i,j])
      fimpara
   fimpara

   Escreval

   // Entrada de dados
   Escreval("--- Leitura da Matriz N ---")
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         Escreva("N[", i, ",", j, "]: ")
         Leia(matN[i,j])
      fimpara
   fimpara

   Escreval

   // Processamento e saída de dados
   Escreval("--- Matriz Soma (M + N) ---")
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         matSoma[i,j] <- matM[i,j] + matN[i,j]

         Escreva(matSoma[i,j], "   ")
      fimpara
      Escreval
   fimpara

   Escreval

   // Processamento e saída de dados
   Escreval("--- Matriz Diferença (M - N) ---")
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         matDif[i,j] <- matM[i,j] - matN[i,j]

         Escreva(matDif[i,j], "   ")
      fimpara
      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que lê duas matrizes
// 4X4 M e N e cria uma matriz que seja:
// a) a soma de M com N;
// b) a diferença de M com N;