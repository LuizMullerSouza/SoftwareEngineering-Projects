algoritmo "ContagemInteligente"

// Variáveis
var
   n1, n2: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor do início: ")
   Leia(n1)
   Escreva("Informe o valor do final: ")
   Leia(n2)

   Escreval
   Escreval("--- Resultado da Contagem ---")

   // Lógica condicional e processamento
   se (n1 = n2) entao
      Escreval("A contagem inteligente não pode funcionar: valores iguais!")
   senao
      // Contagem crescente
      se (n1 < n2) entao
         enquanto (n1 <= n2) faca
            Escreva(n1, ".. ")
            n1 <- n1 + 1
         fimenquanto
      // Contagem decrescente
      senao
         enquanto (n1 >= n2) faca
            Escreva(n1, ".. ")
            n1 <- n1 - 1
         fimenquanto
      fimse
   fimse

   Escreval

// Fim da execução
fimalgoritmo

// Escreva um algoritmo que leia dois valores inteiros (início e fim)
// e realize uma contagem inteligente. O programa deve detectar
// automaticamente se a contagem deve ser crescente ou decrescente.
// Caso os valores sejam iguais, deve-se informar que a contagem não
// é possível.