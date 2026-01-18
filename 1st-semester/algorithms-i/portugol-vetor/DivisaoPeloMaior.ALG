algoritmo "DivisaoPeloMaior"

// Variáveis
var
   vet: vetor [1..500] de inteiro
   vetDividido: vetor [1..500] de real
   maior, i: inteiro

// Início
inicio
   Escreval("--- Preenchendo o Vetor ---")

   // Loop para entrada, leitura de dados e encontro do maior valor
   para i <- 1 ate 500 passo 1 faca
      Escreva("Digite o ", i, "º número: ")
      Leia(vet[i])

      // Lógica condicional para o maior valor
      se (i = 1) entao
         maior <- vet[i]
      senao
         se (vet[i] > maior) entao
            maior <- vet[i]
         fimse
      fimse
   fimpara

   Escreval
   Escreval("Maior número encontrado: ", maior)
   Escreval("Dividindo o vetor...")
   Escreval("Vetor dividido com sucesso!")
   Escreval
   Escreval("--- Resultados da Divisão ---")

   // Loop para cálculo e exibição do resultado
   para i <- 1 ate 500 passo 1 faca
      vetDividido[i] <- vet[i] / maior
      Escreva(vet[i], " / ", maior, " = ", vetDividido[i]:0:2)
      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Faça um algoritmo em PORTUGOL que leia um vetor de 500 posições
// de números e divida todos os seus elementos pelo maior valor do
// vetor. Mostre o vetor após os cálculos.