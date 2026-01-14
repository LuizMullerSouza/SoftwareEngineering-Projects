algoritmo "GeradorNesimoTermoFibonacci"

// Variáveis
var
   termo, i, a, b, proximo: inteiro

// Início
inicio
   // Inicialização
   a <- 0
   b <- 1

   // Entrada e leitura de dados
   Escreva("Digite o N-ésimo termo para calcular da sequência Fibonacci: ")
   Leia(termo)

   Escreval
   Escreva("Sequência: ")

   // Loop para cálculo da sequência de Fibonacci
   para i <- 1 ate termo passo 1 faca
      // Valor atual
      Escreva(b, " ")

      // Lógica de cálculo
      proximo <- a + b
      a <- b
      b <- proximo
   fimpara

   Escreval

// Fim da execução
fimalgoritmo

// A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8,
// 13, 21, 34, 55, ... Escreva um algoritmo em PORTUGOL que gere a
// série de FIBONACCI até o Nésimo termo.