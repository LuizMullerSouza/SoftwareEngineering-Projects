algoritmo "SomadorDeLinhas"

// Variáveis
var
   a: vetor [1..12, 1..12] de real
   somaLinha: vetor [1..12] de real
   i, j: inteiro

// Início
inicio
   Escreval("--- Preenchendo a Matriz 12x12 ---")

   // Loop para entrada, leitura de dados e soma das linhas
   para i <- 1 ate 12 passo 1 faca
      somaLinha[i] <- 0
      Escreval("--- Digitando dados da Linha ", i, " ---")
      para j <- 1 ate 12 passo 1 faca
         Escreva("Linha ", i, ", Coluna ", j, ": ")
         Leia(a[i,j])
         somaLinha[i] <- somaLinha[i] + a[i,j]
      fimpara
   fimpara

   Escreval
   Escreval("Matriz preenchida com sucesso!")
   Escreval
   Escreval("--- Resultado das Somas por Linha ---")

   // Loop para saída de dados
   para i <- 1 ate 12 passo 1 faca
      Escreval("Soma da Linha ", i, ": ", somaLinha[i]:0:2)
   fimpara

// Fim da execução
fimalgoritmo

// Escreva um algoritmo que leia uma matriz A[12][12],
// após isso, realize a soma de cada uma das linhas de
// A, mostrando o resultado ao usuário.