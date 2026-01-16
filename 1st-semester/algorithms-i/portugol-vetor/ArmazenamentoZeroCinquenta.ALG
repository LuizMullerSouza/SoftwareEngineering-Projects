algoritmo "ArmazenamentoZeroCinquenta"

// Variáveis
var
   vet: vetor [1..51] de inteiro
   i: inteiro

// Início
inicio
   Escreval("Preenchendo vetor...")

   // Loop para preencher o vetor
   para i <- 0 ate 50 passo 1 faca
      vet[i+1] <- i
   fimpara

   Escreval("Vetor preenchido com sucesso!")
   Escreval
   Escreval("--- Listagem dos Valores ---")

   // Exibição do resultado
   para i <- 1 ate 51 passo 1 faca
      Escreva(vet[i], " ")
   fimpara

   Escreval

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que armazene em
// um vetor todos os números inteiros de 0 a 50. Após
// isso, o algoritmo deve imprimir todos os valores armazenados.