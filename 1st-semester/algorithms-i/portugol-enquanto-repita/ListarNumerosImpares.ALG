algoritmo "ListarNumerosImpares"

// Variáveis
var
   n, verific: inteiro

// Início
inicio
   n <- 0

   // Processamento em Loop
   enquanto (n <= 20) faca
      verific <- n mod 2

      se (verific <> 0) entao
         // Saída de dados
         Escreval(n)
      fimse

      // Incremento do contador
      n <- n + 1
   fimenquanto

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que apresente
// todos os valores numéricos inteiros ímpares
// situados na faixa de 0 a 20.