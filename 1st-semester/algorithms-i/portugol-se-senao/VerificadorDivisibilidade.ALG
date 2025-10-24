algoritmo "VerificadorDivisibilidade"

// Variáveis
var
   a, b: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor do dividendo (A): ")
   Leia(a)
   Escreva("Informe o valor do divisor (B): ")
   Leia(b)

   // Lógica condicional para saída de dados
   se (a mod b = 0) entao
      Escreval(a, " é divisível por ", b)
   senao
      Escreval(a, " não é divisível por ", b)
   fimse

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL para determinar
// se um número A é divisível por um outro número B. Esses
// valores devem ser fornecidos pelo usuário.