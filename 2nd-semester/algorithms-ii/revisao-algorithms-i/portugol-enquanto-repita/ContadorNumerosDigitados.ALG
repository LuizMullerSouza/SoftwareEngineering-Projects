algoritmo "ContadorNumerosDigitados"

// Variáveis
var
   n, digitados: inteiro

// Início
inicio
   // Inicialização
   digitados <- 0

   // Loop para entrada de dados
   repita
      // Entrada e leitura de dados
      Escreva("Informe um valor (negativo para sair): ")
      Leia(n)

      // Lógica condicional para contagem
      se (n >= 0) entao
         digitados <- digitados + 1
      fimse
   ate (n < 0)

   // Saída de dados
   Escreval
   Escreval("Ao total foram digitados ", digitados, " números")

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia números enquanto forem
// positivos e imprima quantos números foram digitados.