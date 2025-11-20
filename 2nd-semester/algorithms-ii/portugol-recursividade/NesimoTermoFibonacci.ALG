algoritmo "NesimoTermoFibonacci"

// Variáveis
var
   num, resultado: inteiro

// Função recursiva
funcao fibonacci (n: inteiro): inteiro
inicio
   // Caso base
   se ((n = 0) ou (n = 1)) entao
      retorne n
   senao
      // Chamada recursiva
      retorne fibonacci(n - 1) + fibonacci(n - 2)
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe qual termo da sequência de Fibonacci deseja calcular: ")
   Leia(num)
   Escreval

   // Chamada da função
   resultado <- fibonacci(num)

   // Saída de dados
   Escreval("O ", num, "º termo da sequência de Fibonacci é: ", resultado)

// Fim da execução
fimalgoritmo

// Faça uma função recursiva que calcule o
// N-ésimo termo da sequência de Fibonacci.