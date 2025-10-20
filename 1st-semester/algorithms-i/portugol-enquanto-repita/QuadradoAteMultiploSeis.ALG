algoritmo "QuadradoAteMultiploSeis"

// Variáveis
var
   n, quadr: inteiro

// Início
inicio
   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe um valor (múltiplo de 6 para sair): ")
      Leia(n)

      // Processamento
      quadr <- n * n

      // Saída de dados
      Escreval("O quadrado de ", n, " é ", quadr)

   ate (n mod 6 = 0)

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia vários números
// positivos e imprimir o quadrado de cada número
// até entrar um número múltiplo de 6 que deverá
// ter seu quadrado impresso também.