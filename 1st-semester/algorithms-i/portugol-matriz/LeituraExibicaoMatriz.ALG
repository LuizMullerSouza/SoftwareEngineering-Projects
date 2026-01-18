algoritmo "LeituraExibicaoMatriz"

// Variáveis
var
   matrizA: vetor [1..2, 1..4] de inteiro
   i, j: inteiro

// Início
inicio
   Escreval("--- Preenchendo a Matriz ---")

   // Entrada e leitura de dados
   para i <- 1 ate 2 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         Escreva("Digite valor da Linha ", i, ", Coluna ", j, ": ")
         Leia(matrizA[i,j])
      fimpara
   fimpara

   Escreval
   Escreval("--- Exibindo os Dados ---")

   // Saída de dados
   para i <- 1 ate 2 passo 1 faca
      para j <- 1 ate 4 passo 1 faca
         Escreva(matrizA[i,j], " ")
      fimpara

      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Elabore um algoritmo que declare uma matriz 2x4 de inteiros.
// O programa deve ler os valores fornecidos pelo usuário para
// preencher a matriz e, em seguida, exibir na tela todos os
// elementos armazenados.