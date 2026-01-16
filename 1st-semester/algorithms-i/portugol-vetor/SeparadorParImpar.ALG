algoritmo "SeparadorParImpar"

// Variáveis
var
   vetPrincipal, vetPar, vetImpar: vetor [1..30] de inteiro
   i, contPar, contImpar: inteiro

// Início
inicio
   // Inicialização
   contPar <- 0
   contImpar <- 0

   Escreval("--- Entrada de Dados ---")

   // Entrada e leitura de dados com processamento entre os vetores
   para i <- 1 ate 30 passo 1 faca
      Escreva("Digite o ", i, "° valor: ")
      Leia(vetPrincipal[i])

      // Lógica condicional para separar os números pares e ímpares
      se (vetPrincipal[i] mod 2 = 0) entao
         contPar <- contPar + 1
         vetPar[contPar] <- vetPrincipal[i]
      senao
         contImpar <- contImpar + 1
         vetImpar[contImpar] <- vetPrincipal[i]
      fimse
   fimpara

   Escreval

   // Exibição do resultado par
   se (contPar = 0) entao
      Escreval("Nenhum número par foi digitado.")
   senao
      Escreval("--- Listagem do Vetor - PAR ---")
      para i <- 1 ate contPar passo 1 faca
         Escreva(vetPar[i], " ")
      fimpara
      Escreval
   fimse

   Escreval

   // Exibição do resultado ímpar
   se (contImpar = 0) entao
      Escreval("Nenhum número ímpar foi digitado.")
   senao
      Escreval("--- Listagem do Vetor - ÍMPAR ---")
      para i <- 1 ate contImpar passo 1 faca
         Escreva(vetImpar[i], " ")
      fimpara
      Escreval
   fimse

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que lê um conjunto de 30 valores
// e os coloca em 2 vetores conforme estes valores forem
// pares ou ímpares. Terminada a leitura escrever o conteúdo
// dos dois vetores.