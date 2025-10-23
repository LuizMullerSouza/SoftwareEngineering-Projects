algoritmo "MediaQuatroValores"

// Variáveis
var
   n1, n2, n3, n4, media: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(n1)
   Escreva("Informe o segundo valor: ")
   Leia(n2)
   Escreva("Informe o terceiro valor: ")
   Leia(n3)
   Escreva("Informe o quarto valor: ")
   Leia(n4)

   // Processamento
   media <- (n1 + n2 + n3 + n4) / 4

   // Saída de dados
   Escreval("A média entre os quatro números é: ", media:0:2)

// Fim da execução
fimalgoritmo

// Desenvolva um algoritmo para calcular a média
// entre 4 valores fornecidos pelo usuário