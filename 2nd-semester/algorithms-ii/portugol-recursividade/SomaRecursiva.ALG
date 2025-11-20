algoritmo "SomaRecursiva"

// Variáveis
var
   num, resultado: inteiro

// Função recursiva
funcao soma (n: inteiro): inteiro
inicio
   // Caso base
   se (n = 1) entao
      retorne 1
   senao
      // Chamada recursiva
      retorne n + soma(n - 1)
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro positivo: ")
   Leia(num)
   Escreval

   // Validação lógica
   se (num < 1) entao
      Escreval("Por favor, informe um número maior ou igual a 1.")
   senao
      // Chamada da função
      resultado <- soma(num)

      // Saída de dados
      Escreval("A soma de 1 até ", num, " é: ", resultado)
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função recursiva para
// calcular a soma de 1 até n.