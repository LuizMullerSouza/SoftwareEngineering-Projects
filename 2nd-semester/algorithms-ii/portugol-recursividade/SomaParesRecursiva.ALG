algoritmo "SomaParesRecursiva"

// Variáveis
var
   num, resultado: inteiro

// Função recursiva
funcao somaPar (n: inteiro): inteiro
inicio
   // Caso base
   se (n = 1) entao
      retorne 0
   senao
      // Verificação de paridade
      se (n mod 2 = 0) entao
         retorne n + somaPar(n - 1)
      senao
         retorne somaPar(n - 1)
      fimse
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
      resultado <- somaPar(num)

      // Saída de dados
      Escreval("A soma dos números PARES de 1 até ", num, " é: ", resultado)
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função recursiva para calcular a
// soma todos os números pares de 1 até n.