algoritmo "MaiorElementoMatriz"

// Variáveis
var
   mat: vetor[1..100, 1..100] de inteiro
   n, i, j: inteiro

// Procedimento
procedimento maiorValor (n: inteiro)
var
   i, j, maior: inteiro
inicio
   maior <- mat[1,1]

   para i <- 1 ate n passo 1 faca
      para j <- 1 ate n passo 1 faca
         se (mat[i,j] > maior) entao
            maior <- mat[i,j]
         fimse
      fimpara
   fimpara

   Escreval("O maior elemento da Matriz é: ", maior)
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   repita
      Escreva("Informe o tamanho da matriz (1 a 100): ")
      Leia(n)

      se (n < 1) ou (n > 100) entao
         Escreval("Erro: Tamanho inválido! O máximo é 100.")
         Escreval("")
      fimse
   ate (n >= 1) e (n <= 100)

   Escreval("")
   Escreval("--- Preencha a Matriz", n, " x", n, " ---")
   para i <- 1 ate n passo 1 faca
      para j <- 1 ate n passo 1 faca
         Escreva("[", i, ",", j, "]: ")
         Leia(mat[i,j])
      fimpara
   fimpara

   Escreval("")

   // Chamada do procedimento
   maiorValor(n)

// Fim da execução
fimalgoritmo

// Faça um procedimento que receba uma matriz quadrada (número
// de linha igual ao número de colunas), o número de linhas ou
// colunas da matriz e retorne o maior elemento da matriz.