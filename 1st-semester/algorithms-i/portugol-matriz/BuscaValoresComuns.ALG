algoritmo "BuscaValoresComuns"

// Variáveis
var
   matA, matB: vetor [1..20, 1..20] de inteiro
   linhaA, colunaA, linhaB, colunaB, flag: inteiro

// Início
inicio
   // Inicialização
   flag <- 0

   // Entrada e leitura de dados da Matriz A
   Escreval("--- Preenchendo a Matriz A ---")
   para linhaA <- 1 ate 20 passo 1 faca
      para colunaA <- 1 ate 20 passo 1 faca
         Escreva("MatA [", linhaA, ",", colunaA, "]: ")
         Leia(matA[linhaA,colunaA])
      fimpara
   fimpara
   Escreval
   
   // Entrada e leitura de dados da Matriz B
   Escreval("--- Preenchendo a Matriz B ---")
   para linhaB <- 1 ate 20 passo 1 faca
      para colunaB <- 1 ate 20 passo 1 faca
         Escreva("MatB [", linhaB, ",", colunaB, "]: ")
         Leia(matB[linhaB,colunaB])
      fimpara
   fimpara
   Escreval
   
   // Loops aninhados para buscar os valores em comum
   Escreval("Buscando valores comuns...")
   para linhaA <- 1 ate 20 passo 1 faca
      para colunaA <- 1 ate 20 passo 1 faca
         para linhaB <- 1 ate 20 passo 1 faca
            para colunaB <- 1 ate 20 passo 1 faca
               se (matA[linhaA, colunaA] = matB[linhaB,colunaB]) entao
                  Escreval("Encontrado valor ", matA[linhaA,colunaA], " em A[", linhaA, ",", colunaA, "] e B[", linhaB, ",", colunaB, "]")
               fimse
            fimpara
         fimpara
      fimpara
   fimpara
   
   // Lógica condicional para caso nenhum número tenha sido encontrado
  	se (flag = 0) entao
		Escreval("Nenhum valor da Matriz A foi encontrado na Matriz B")
	fimse

// Fim da execução
fimalgoritmo

// Faça um algoritmo que leia duas matrizes 20 x 20 e escreva
// os valores da primeira matriz que são encontrados em qualquer
// posição da segunda matriz;