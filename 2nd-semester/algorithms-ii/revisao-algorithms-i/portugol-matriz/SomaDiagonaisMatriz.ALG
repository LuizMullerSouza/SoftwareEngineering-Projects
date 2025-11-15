algoritmo "SomaDiagonaisMatriz"

// Variáveis
var
   mat: vetor[1..5, 1..5] de inteiro
   i, j, somaP, somaS: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Leitura da Matriz 5x5 ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("M[", i, ",", j, "]: ")
         Leia(mat[i,j])
      fimpara
   fimpara

   // Inicialização
   somaP <- 0
   somaS <- 0

   // Processamento
   para i <- 1 ate 5 passo 1 faca
      // Soma da diagonal principal
      somaP <- somaP + mat[i,i]

      // Soma da diagonal secundária
      somaS <- somaS + mat[i, 5 - i + 1]
   fimpara

   Escreval

   // Saída de dados
   Escreval("Soma da Diagonal Principal: ", somaP)
   Escreval("Soma da Diagonal Secundária: ", somaS)

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que lê uma
// matriz 5x5 e calcule a soma da:
// a) Diagonal Principal;
// b) Diagonal Secundária;