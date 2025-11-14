algoritmo "SomaCentena"

// Variáveis
var
   n, soma: inteiro

// Início
inicio
   // Inicialização
   soma <- 0

   // Loop de processamento
   para n <- 1 ate 100 passo 1 faca
      Escreval(n)
      soma <- soma + n
   fimpara

   // Saída de dados
   Escreval
   Escreval("A soma de todos os números foi: ", soma)

// Fim da execução
fimalgoritmo

// Criar um algoritmo que imprima todos os
// números de 1 até 100 e a soma deles;