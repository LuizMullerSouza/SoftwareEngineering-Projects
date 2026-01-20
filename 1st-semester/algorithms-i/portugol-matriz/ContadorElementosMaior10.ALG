algoritmo "ContadorElementosMaior10"

// Variáveis
var
   mat: vetor [1..6, 1..6] de real
   quantMaior10, i, j: inteiro

// Início
inicio
   // Inicialização
   quantMaior10 <- 0

   Escreval("--- Preenchendo a Matriz 6x6 ---")

   // Loop para entrada, leitura de dados e verificação
   para i <- 1 ate 6 passo 1 faca
      para j <- 1 ate 6 passo 1 faca
         Escreva("Digite o valor da posição [", i, ",", j, "]: ")
         Leia(mat[i,j])

         // Lógica condicional para acumular o somador
         se (mat[i,j] > 10) entao
            quantMaior10 <- quantMaior10 + 1
         fimse

      fimpara
   fimpara

   Escreval
   Escreval("Matriz preenchida com sucesso!")
   Escreval("--- Resultado ---")

   // Saída de dados com formatação
   se (quantMaior10 = 0) entao
      Escreval("Nenhum valor maior que 10 foi encontrado na matriz.")
   senao
      se (quantMaior10 = 1) entao
         Escreval("Apenas 1 valor maior que 10 foi encontrado na matriz.")
      senao
         Escreval("Foram encontrados ", quantMaior10, " valores maiores que 10 na matriz.")
      fimse
   fimse

// Fim da execução
fimalgoritmo

// Leia uma matriz 6 x 6, conte e escreva
// quantos valores maiores que 10 ela possui.