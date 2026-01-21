algoritmo "RotacaoMatriz90Graus"

// Variáveis
var
   matrizM: vetor [1..3, 1..3] de inteiro
   i, j: inteiro

// Início
inicio

   // Entrada e leitura de dados
   Escreval("--- Preenchendo a Matriz M ---")
   para i <- 1 ate 3 passo 1 faca
      para j <- 1 ate 3 passo 1 faca
         Escreva("Posição [", i, ",", j, "]: ")
         Leia(matrizM[i,j])
      fimpara
   fimpara

   Escreval
   Escreval("--- Matriz Rotacionada em 90° ---")

   // Saída de dados com a matriz rotacionada
   para i <- 1 ate 3 passo 1 faca
      para j <- 3 ate 1 passo -1 faca
         Escreva(matrizM[j,i], " ")
      fimpara
      Escreval
   fimpara

// Fim da execução
fimalgoritmo

// Criar um algoritmo que entre com valores inteiros para uma matriz
// M 3 x 3 e imprima a matriz final, conformemostrado a seguir:
// [ 1 2 3 ]                     [ 7 4 1 ]
// [ 4 5 6 ]  a matriz gira 90°  [ 8 5 2 ]
// [ 7 8 9 ]                     [ 9 6 3 ]