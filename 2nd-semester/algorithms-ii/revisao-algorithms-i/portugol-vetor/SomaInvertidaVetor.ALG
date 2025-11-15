algoritmo "SomaInvertidaVetor"

// Variáveis
var
   vetA, vetB, vetC: vetor [1..8] de inteiro
   i: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Preenchendo o Vetor A ---")
   para i <- 1 ate 8 passo 1 faca
      Escreva("Informe o ", i, "º valor: ")
      Leia(vetA[i])
   fimpara

   Escreval
   
   // Entrada de dados
   Escreval("--- Preenchendo o Vetor B ---")
   para i <- 1 ate 8 passo 1 faca
      Escreva("Informe o ", i, "º valor: ")
      Leia(vetB[i])
   fimpara

   Escreval

   // Processamento e saída de dados
   Escreval("--- Vetor C (A[i] + B[inverso]) ---")
   para i <- 1 ate 8 passo 1 faca
      // Cálculo
      vetC[i] <- vetA[i] + vetB[9 - i]

      Escreval("C[", i, "] = ", vetC[i], " (", vetA[i], " + ", vetB[9-i], ")")
   fimpara

// Fim da execução
fimalgoritmo

// Elabore um algoritmo que leia 8 valores inteiros
// para o vetor A e 8 valores inteiros para o vetor B.
// Em seguida, crie o vetor C contendo a soma dos
// elementos de A com os elementos de B na ordem
// inversa.