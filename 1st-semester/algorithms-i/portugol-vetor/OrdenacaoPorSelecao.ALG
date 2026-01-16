algoritmo "OrdenacaoPorSelecao"

// Variáveis
var
   numero: vetor [1..10] de inteiro
   aux, i, j: inteiro

// Início
inicio
   Escreval("--- Preenchendo o Vetor ---")
   // Loop para entrada e leitura de dados
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° valor: ")
      Leia(numero[i])
   fimpara

   Escreval
   Escreval("Ordenando o Vetor em ordem crescente...")

   // Loop para ordenar o vetor em ordem crescente
   para i <- 1 ate 9 passo 1 faca
      para j <- i + 1 ate 10 passo 1 faca

         // Lógica condicional para troca
         se (numero[i] > numero[j]) entao
            aux <- numero[i]
            numero[i] <- numero[j]
            numero[j] <- aux
         fimse

      fimpara
   fimpara

   Escreval("Vetor ordenado com sucesso!")
   Escreval
   Escreval("--- Listagem Ordenada ---")

   // Loop para saída de dados
   para i <- 1 ate 10 passo 1 faca
      Escreva(numero[i], " ")
   fimpara
   Escreval

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que leia um
// vetor de 10 posições e mostre-o ordenado em
// ordem crescente.