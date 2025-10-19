algoritmo "ConversorFahrenheitCelsius"

// Variáveis
var
   grausF, grausC: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe uma temperatura em Farenheit: ")
   Leia(grausF)

   // Processamento
   grausC <- (grausF - 32) / 1.8

   // Saída de dados
   // :0:1 formata para exibir apenas 1 casa decimal
   Escreval("Temperatura em Graus Celsius: ", grausC:0:1, "°C")

// Fim da execução
fimalgoritmo

// Desenvolva um programa que transforme um valor
// de temperatura fornecido pelo usuário, de Farenheit
// ( F ) para Graus Celsius ( ºC ). Fórmula C = (F – 32)/1.8