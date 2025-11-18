algoritmo "OperacoesMistasMatriz"

// Variáveis
var
   matPrincipal: vetor[1..5, 1..5] de inteiro

// Procedimento para preencher a matriz
procedimento preencherMatriz()
var
   i, j: inteiro
inicio
   Escreval("--- Preenchendo a Matriz 5x5 ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("Linha ", i, " | Coluna ", j, ": ")
         Leia(matPrincipal[i,j])
      fimpara
   fimpara
fimprocedimento

// Procedimento para somar a diagonal principal
procedimento somarDiagPrincipal()
var
   i, j, soma: inteiro
inicio
   soma <- 0
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         se (i = j) entao
            soma <- soma + matPrincipal[i,j]
         fimse
      fimpara
   fimpara
   Escreval
   Escreval("A soma da diagonal principal é: ", soma)
fimprocedimento

// Procedimento para listar a matriz
procedimento listaMatriz()
var
   i, j: inteiro
inicio
   Escreval
   Escreval("--- Listagem da Matriz ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("[", matPrincipal[i,j], "] ")
      fimpara
      Escreval
   fimpara
fimprocedimento

// Início
inicio
   // Chamada do procedimento para preencher
   preencherMatriz()

   // Chamada do procedimento para somar a diagonal principal
   somarDiagPrincipal()

   // Chamada do procedimento para listar a matriz
   listaMatriz()

// Fim da execução
fimalgoritmo

// Faça um algoritmo que irá possuir um procedimento para
// preencher  uma matriz[5][5] , um procedimento para somar
// todos os valores da diagonal principal e um procedimento
// para listar todos os elementos da referida matriz.