algoritmo "MetadeDoVetor"

// Variáveis
var
   numero: vetor [1..10] de real
   i: inteiro

// Início
inicio
   // Loop para entrada, leitura e cálculo dos dados
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° número: ")
      Leia(numero[i])

      numero[i] <- numero[i] / 2
   fimpara

   Escreval
   Escreval("Dividindo valores pela metade...")
   Escreval("Vetor processado com sucesso!")
   Escreval
   Escreval("--- Valores Armazenados pela Metade ---")

   // Loop para saída de dados
   para i <- 1 ate 10 passo 1 faca
      Escreva(numero[i]:0:2, " ")
   fimpara

   Escreval

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que receba dez números
// do usuário e armazene em um vetor a metade de cada número.
// Após isso, o algoritmo deve imprimir todos os valores armazenados.