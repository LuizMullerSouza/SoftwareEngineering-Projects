algoritmo "MediaNumerosPositivos"

// Variáveis
var
   n, soma, media: real
   digitados: inteiro

// Início
inicio
   // Inicialização
   digitados <- 0
   soma <- 0

   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe qualquer valor (negativo para sair): ")
      Leia(n)

      // Processamento
      se (n >= 0) entao
         digitados <- digitados + 1
         soma <- soma + n
      fimse
   ate (n < 0)

   // Lógica condicional para cálculo e saída
   se (digitados > 0) entao
      media <- soma / digitados
      Escreval("A média dos ", digitados, " números digitados foi: ", media:0:2)
   senao
      Escreval("Nenhum número positivo foi digitado.")
   fimse

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia números enquanto forem
// positivos e imprima a média dos números digitados.