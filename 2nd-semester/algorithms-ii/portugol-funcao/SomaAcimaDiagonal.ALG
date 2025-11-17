algoritmo "SomaAcimaDiagonal"

// Variáveis
var
   minhaMatriz: vetor[1..5, 1..5] de real
   somaAcima: real
   i, j: inteiro

// Função
funcao acimaPrincipal (): real
var
   somador: real
   i, j: inteiro
inicio
   // Inicialização
   somador <- 0

   // Loop para processamento
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         // Lógica condicional
         se (j > i) entao
            somador <- somador + minhaMatriz[i,j]
         fimse
      fimpara
   fimpara

   // Retorno do somador
   retorne somador
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreval("--- Preenchendo a Matriz 5x5 ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("Informe o valor real para [", i, ",", j, "]: ")
         Leia(minhaMatriz[i,j])
      fimpara
   fimpara

   Escreval

   // Chamada da função
   somaAcima <- acimaPrincipal()

   // Saída de dados
   Escreval("A soma dos elementos acima da diagonal principal é: ", somaAcima:0:2)

// Fim da execução
fimalgoritmo

// Faça uma função que receba uma matriz A[5,5] preenchida e retorne
// a soma de todos os elementos acima da diagonal principal.