algoritmo "CuboRaizCubica"

// Variáveis
var
   i, n, cubo: inteiro
   raiz: real

// Início
inicio
   i <- 1

   // Processamento em Loop
   enquanto (i <= 4) faca
      // Entrada e leitura de dados
      Escreva("Informe um número: ")
      Leia(n)

      // Processamento
      cubo <- n * n * n
      raiz <- n ^ (1 / 3)

      // Saída de dados
      Escreval("O cubo de ", n, " é ", cubo)
      Escreval("A raiz cúbica de ", n, " é ", raiz:0:2)
      Escreval("----------------------------")

      // Incremento do contador
      i <- i + 1
   fimenquanto

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia 4 números e
// escreva o cubo e a raiz cúbica de cada número.