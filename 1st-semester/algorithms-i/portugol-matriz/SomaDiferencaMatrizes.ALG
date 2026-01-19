algoritmo "SomaDiferencaMatrizes"

// Variáveis
var
   m, n, soma, diferenca: vetor [1..4, 1..4] de real
   i, j: inteiro

// Início
inicio
   // Loop para entrada e leitura de dados da matriz M
   Escreval("--- Preenchendo a Matriz M ---")
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         Escreva("Matriz M [", i, ",", j, "]: ")
         Leia(m[i,j])
      fimpara
   fimpara
   Escreval("Matriz M preenchida com sucesso!")
   
   Escreval
   
   // Loop para entrada e leitura de dados da matriz N
   Escreval("--- Preenchendo a Matriz N ---")
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         Escreva("Matriz N [", i, ",", j, "]: ")
         Leia(n[i,j])
      fimpara
   fimpara
   Escreval("Matriz N preenchida com sucesso!")
   
   Escreval
   
   Escreval("--- Calculando M + N ---")

   // Loop para soma
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         soma[i,j] <- m[i,j] + n[i,j]
         Escreval("Posição [", i, ",", j, "]: ", m[i,j], " + ", n[i,j], " = ", soma[i,j])
      fimpara
   fimpara

   Escreval
   
   Escreval("--- Calculando M - N ---")

   // Loop para diferença
   para i <- 1 ate 4 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         diferenca[i,j] <- m[i,j] - n[i,j]
         Escreval("Posição [", i, ",", j, "]: ", m[i,j], " - ", n[i,j], " = ", diferenca[i,j])
      fimpara
   fimpara

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que lê duas matrizes
// 4X4 M e N e cria uma matriz que seja:
// a) a soma de M com N;
// b) a diferença de M com N;