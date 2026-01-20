algoritmo "ElementosAcimaDiagonalPrincipal"

// Variáveis
var
   mat: vetor [1..10, 1..10] de inteiro
   i, j: inteiro

// Início
inicio
   Escreval("--- Preenchendo a Matriz 10x10 ---")

   // Loop para entrada e leitura de dados
   para i <- 1 ate 10 passo 1 faca
      para j <- 1 ate 10 passo 1 faca
         Escreva("Posição [", i, ",", j, "]: ")
         Leia(mat[i,j])
      fimpara
   fimpara
   Escreval
   
   Escreval("--- Elementos acima da Diagonal Principal ---")

   // Loop para saída de dados
   para i <- 1 ate 10 passo 1 faca
      Escreva("Linha ", i, ": ")
      para j <- 1 ate 10 passo 1 faca

         // Localização do elemento
         se (j > i) entao
            Escreva(mat[i,j], " ")
         fimse
      fimpara
      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Criar um algoritmo que leia os elementos de uma matriz inteira
// 10 x 10 e escreva somente os elementos acima da diagonal principal.