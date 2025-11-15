algoritmo "VerificadorTriangularSuperior"

// Variáveis
var
   mat: vetor[1..5, 1..5] de inteiro
   i, j, flag: inteiro

// Início
inicio
   // Inicialização
   flag <- 0

   // Entrada de dados
   Escreval("--- Leitura da Matriz 5x5 ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("M[", i, ",", j, "]: ")
         Leia(mat[i,j])
      fimpara
   fimpara

   Escreval

   // Processamento
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         // Lógica condicional
         se (i > j) entao
            se (mat[i,j] <> 0) entao
               flag <- 1
            fimse
         fimse
      fimpara
   fimpara

   // Saída de dados
   se (flag = 0) entao
      Escreval("A matriz é triangular superior!")
   senao
      Escreval("A matriz não é triangular superior!")
   fimse

// Fim da execução
fimalgoritmo

// Crie um algoritmo que verifique se uma matriz é triangular
// superior. Uma matriz é triangular superior se todos os
// elementos abaixo da diagonal principal são iguais a 0.