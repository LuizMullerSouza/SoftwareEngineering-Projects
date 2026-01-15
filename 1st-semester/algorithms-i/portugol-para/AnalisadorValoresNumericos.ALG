algoritmo "AnalisadorValoresNumericos"

// Variáveis
var
   n, soma, divisiveis, nulos, somapares, i: inteiro
   media: real

// Início
inicio
   // Inicialização
   soma <- 0
   divisiveis <- 0
   nulos <- 0
   somapares <- 0

   // Loop para processamento
   para i <- 1 ate 5 passo 1 faca
      Escreva("Informe o ", i, "º valor: ")
      Leia(n)

      soma <- soma + n

      // Lógica condicional
      se (n mod 5 = 0) entao
         divisiveis <- divisiveis + 1
      fimse

      se (n mod 2 = 0) entao
         somapares <- somapares + n
      fimse

      se (n = 0) entao
         nulos <- nulos + 1
      fimse
   fimpara

   // Cálculo da média
   media <- soma / 5

   Escreval

   // Saída de dados
   Escreval("A soma dos valores digitados foi: ", soma)
   Escreval("A média dos valores foi: ", media:0:1)
   Escreval("A quantidade de números divisíveis por 5: ", divisiveis)
   Escreval("Valores nulos: ", nulos)
   Escreval("A soma dos valores pares foi: ", somapares)

// Fim da execução
fimalgoritmo

// Desenvolver um algoritmo que leia 5 valores inteiros.
// Ao final da leitura, o programa deve apresentar:
// a soma total dos valores, a média aritmética, quantos
// valores são divisíveis por 5, a quantidade de valores
// nulos e a soma dos valores pares.