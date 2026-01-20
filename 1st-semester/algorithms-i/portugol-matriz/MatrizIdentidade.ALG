algoritmo "MatrizIdentidade"

// Variáveis
var
   mat: vetor [1..5, 1..5] de inteiro
   i, j: inteiro

// Início
inicio
   Escreval("--- Gerando e Exibindo a Matriz ---")

   // Saída de dados das linhas
   para i <- 1 ate 5 passo 1 faca

      // Saída de dados das colunas
      para j <- 1 ate 5 passo 1 faca
         se (i = j) entao
            mat[i,j] <- 1
         senao
            mat[i,j] <- 0
         fimse

         // Exibição do resultado
         Escreva(mat[i,j]:3)
      fimpara
      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Faça um algoritmo declarando uma matriz 5 x 5. Preencha
// com 1 a diagonal principal e com 0 os demais elementos.
// Escreva ao final a matriz obtida.