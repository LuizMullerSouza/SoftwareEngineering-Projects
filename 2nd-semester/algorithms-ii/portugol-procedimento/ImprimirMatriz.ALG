algoritmo "ImprimirMatriz"

// Variáveis
var
   minhaMatriz: vetor[1..5, 1..5] de inteiro
   i, j: inteiro

// Procedimento
procedimento escreverMatriz()
var
   i, j: inteiro
inicio
   // Saída de dados
   Escreval
   Escreval("--- Matriz Impressa pelo Procedimento ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva(minhaMatriz[i,j], "   ")
      fimpara
      Escreval
   fimpara
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreval("--- Preenchimento da Matriz 5x5 ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("Informe o valor para [", i, ",", j, "]: ")
         Leia(minhaMatriz[i,j])
      fimpara
   fimpara

   // Chamada do procedimento
   escreverMatriz()

// Fim da execução
fimalgoritmo

// Faça um procedimento que escreva os valores de uma matriz 5x5;