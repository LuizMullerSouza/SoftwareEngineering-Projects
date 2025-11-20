algoritmo "CalcularFatorial"

// Variáveis
var
   num, resultado: inteiro

// Função recursiva
funcao fatorial (n: inteiro): inteiro
inicio
   // Caso base
   se (n = 0) entao
      retorne 1
   senao
      // Chamada recursiva
      retorne n * fatorial(n - 1)
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número para calcular o fatorial: ")
   Leia(num)
   Escreval

   // Chamada da função
   resultado <- fatorial(num)

   // Saída de dados
   Escreval("O fatorial de ", num, " é: ", resultado)

// Fim da execução
fimalgoritmo

// Faça uma função recursiva que calcule
// o fatorial de um número.