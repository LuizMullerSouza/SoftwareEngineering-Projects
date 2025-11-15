algoritmo "SeparadorParImpar"

// Variáveis
var
   principal, par, impar: vetor [1..30] de inteiro
   i, flag1, flag2: inteiro

// Início
inicio
   // Inicialização
   flag1 <- 0
   flag2 <- 0

   // Processamento
   Escreval("--- Informe os 30 valores ---")
   para i <- 1 ate 30 passo 1 faca
      Escreva("Informe o ", i, "º valor: ")
      Leia(principal[i])

      // Lógica condicional para separação
      se (principal[i] mod 2 = 0) entao
         // Par
         flag1 <- flag1 + 1
         par[flag1] <- principal[i]
      senao
         // Ímpar
         flag2 <- flag2 + 1
         impar[flag2] <- principal[i]
      fimse
   fimpara

   Escreval

   // Saída de dados
   se (flag1 <> 0) entao
      Escreval("--- Vetor de Valores Pares ---")
      para i <- 1 ate flag1 passo 1 faca
         Escreval("Par [", i, "]: ", par[i])
      fimpara
   senao
      Escreval("--- Vetor de Pares vazio! ---")
   fimse

   Escreval

   // Saída de dados
   se (flag2 <> 0) entao
      Escreval("--- Vetor de Valores Ímpares ---")
      para i <- 1 ate flag2 passo 1 faca
         Escreval("Ímpar [", i, "]: ", impar[i])
      fimpara
   senao
      Escreval("--- Vetor de Ímpares vazio! ---")
   fimse

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que lê um conjunto de 30
// valores e os coloca em 2 vetores conforme estes
// valores forem pares ou ímpares. Terminada a leitura
// escrever o conteúdo dos dois vetores.