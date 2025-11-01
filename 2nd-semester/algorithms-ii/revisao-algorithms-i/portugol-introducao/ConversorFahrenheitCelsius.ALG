algoritmo "ConversorFahrenheitCelsius"

// Variáveis
var
   f, c: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor em graus Farenheit(F): ")
   Leia(f)

   // Processamento
   c <- (f - 32) * 5 / 9

   // Saída de dados
   Escreval("Graus Celsius: ", c:0:1, " °C")

// Fim da execução
fimalgoritmo

// Desenvolva um programa que transforme um
// valor de temperatura fornecido pelo usuário,
// de Farenheit( F ) para Graus Celsius ( C ).
// Fórmula: [C = 5/9 (F – 32)]