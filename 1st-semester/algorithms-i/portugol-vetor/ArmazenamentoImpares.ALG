algoritmo "ArmazenamentoImpares"

// Variáveis
var
   vetImpares: vetor [1..50] de inteiro
   i, auxVet: inteiro

// Início
inicio
   // Inicialização
   auxVet <- 1

   Escreval("Preenchendo vetor com números ímpares...")

   // Loop para verificar e armazenar ímpares de 1 a 100
   para i <- 1 ate 100 passo 1 faca
      se (i mod 2 <> 0) entao
         vetImpares[auxVet] <- i
         auxVet <- auxVet + 1
      fimse
   fimpara

   Escreval("Vetor preenchido com sucesso!")
   Escreval
   Escreval("--- Listagem dos Valores Armazenados ---")

   // Loop para impressão
   para i <- 1 ate auxVet - 1 passo 1 faca
      Escreva(vetImpares[i], " ")
   fimpara

   Escreval

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que armazene em um vetor
// todos os números impares do intervalo fechado de 1 a 100.
// Após isso, o programa deve imprimir todos os valores armazenados.