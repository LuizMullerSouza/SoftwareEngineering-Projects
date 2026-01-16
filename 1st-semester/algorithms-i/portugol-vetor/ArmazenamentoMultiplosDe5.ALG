algoritmo "ArmazenamentoMultiplosDe5"

// Variáveis
var
   vetMultiplos5: vetor [1..100] de inteiro
   i, auxVet: inteiro

// Início
inicio
   // Inicialização
   auxVet <- 0

   Escreval("Preenchendo vetor com múltiplos de 5...")

   // Loop para filtrar os múltiplos de 5 entre 1 e 500
   para i <- 1 ate 500 passo 1 faca

      // Lógica condicional para verificar se é múltiplo
      se (i mod 5 = 0) entao
         auxVet <- auxVet + 1
         vetMultiplos5[auxVet] <- i
      fimse
   fimpara

   Escreval("Vetor preenchido com sucesso!")
   Escreval
   Escreval("--- Listagem dos Valores Armazenados ---")

   // Loop para impressão
   para i <- 1 ate auxVet passo 1 faca
      Escreva(vetMultiplos5[i], " ")
   fimpara

   Escreval

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que armazene em um vetor todos
// os números múltiplos de 5, no intervalo fechado de 1 a 500.
// Após isso, o algoritmo deve imprimir todos os valores armazenados.