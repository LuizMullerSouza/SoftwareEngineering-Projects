algoritmo "QuocienteRestoDivisao"

// Variáveis
var
   n1, n2, quociente, resto: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor (dividendo): ")
   Leia(n1)
   Escreva("Informe o segundo valor (divisor): ")
   Leia(n2)

   // Processamento
   quociente <- n1 div n2
   resto <- n1 mod n2

   // Saída de dados
   Escreval("Quociente de ", n1, "/", n2, " = ", quociente)
   Escreval("Resto de ", n1, "/", n2, " = ", resto)

// Fim da execução
fimalgoritmo

// Faça um Algoritmo que calcule o Quociente e o Resto
// da divisão de dois valores fornecidos pelo usuário