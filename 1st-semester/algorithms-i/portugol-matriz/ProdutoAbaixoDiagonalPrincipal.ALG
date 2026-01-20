algoritmo "ProdutoAbaixoDiagonalPrincipal"

// Variáveis
var
   mat: vetor [1..10, 1..10] de inteiro
   i, j: inteiro
   produto: real

// Início
inicio
   // Inicialização
   produto <- 1

   Escreval("--- Preenchendo a Matriz 10x10 ---")

   // Loop para entrada e leitura de dados
   para i <- 1 ate 10 passo 1 faca
      para j <- 1 ate 10 passo 1 faca
         Escreva("Posição [", i, ",", j, "]: ")
         Leia(mat[i,j])
      fimpara
   fimpara

   Escreval
   Escreval("Calculando o produto dos elementos abaixo da Diagonal Principal...")

   // Loop para cálculo do produto
   para i <- 1 ate 10 passo 1 faca
      para j <- 1 ate 10 passo 1 faca
         se (i > j) entao
            produto <- produto * mat[i,j]
         fimse
      fimpara
   fimpara

   Escreval
   Escreval("--- Resultado Final ---")
   Escreval("Produto acumulado: ", produto)

// Fim da execução
fimalgoritmo

// Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10
// e imprima o produto dos elementos que estão abaixo da diagonal principal.