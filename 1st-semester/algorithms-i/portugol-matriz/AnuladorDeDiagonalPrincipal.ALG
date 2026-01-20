algoritmo "AnuladorDeDiagonalPrincipal"

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
   Escreval("--- Matriz sem a Diagonal Principal ---")

   // Loop para saída de dados
   para i <- 1 ate 10 passo 1 faca
      para j <- 1 ate 10 passo 1 faca

         // Fora da diagonal principal
         se (i <> j) entao
            Escreva(mat[i,j]:4)
         // Dentro da diagonal principal
         senao
            Escreva(" Nulo")
         fimse

      fimpara

      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10
// e escreva todos os elementos, exceto os elementos da diagonal principal.