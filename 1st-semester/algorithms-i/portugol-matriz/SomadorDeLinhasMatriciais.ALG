algoritmo "SomadorDeLinhasMatriciais"

// Variáveis
var
   matA: vetor [1..3, 1..5] de inteiro
   sl: vetor [1..3] de inteiro
   i, j: inteiro

// Início
inicio

   // Entrada e leitura de dados
   Escreval("--- Preenchendo a Matriz A ---")
   para i <- 1 ate 3 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("Posição [", i, ",", j, "]: ")
         Leia(matA[i,j])
      fimpara
   fimpara

   Escreval
   Escreval("Matriz A preenchida com sucesso, iniciando soma das linhas...")

   // Cálculo das linhas da matriz
   para i <- 1 ate 3 passo 1 faca
      sl[i] <- 0

      para j <- 1 ate 5 passo 1 faca
         sl[i] <- sl[i] + matA[i,j]
      fimpara

   fimpara

   Escreval("Soma realizada com sucesso!")
   Escreval

   // Saída de dados
   Escreval("--- Resultado do Vetor SL ---")
   para i <- 1 ate 3 passo 1 faca
      Escreval("Soma da Linha ", i, ": ", sl[i])
   fimpara

// Fim da execução
fimalgoritmo

// Ler valores inteiros para a matriz A3x5. Gerar e imprimir
// o vetor SL (soma das 3 linhas), onde cada elemento é a soma
// dos elementos de uma linha da matriz A. Faça o trecho que gera
// a o vetor SL separado (laços de repetição) da entrada e da saída
// de dados.