algoritmo "ContadorNumerosPositivos"

// Variáveis
var
   somador, n: inteiro

// Início
inicio
   somador <- 0

   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe qualquer valor (negativo para sair): ")
      Leia(n)

      // Processamento
      se (n >= 0) entao
         somador <- somador + 1
      fimse
   ate (n < 0)

   // Saída de dados
   Escreval(somador, " números positivos foram digitados")

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia números enquanto forem
// positivos e imprima quantos números foram digitados.