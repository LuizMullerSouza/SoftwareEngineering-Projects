algoritmo "SomaElementosMatriz"

// Variáveis
var
   minhaMatriz: vetor[1..5, 1..5] de inteiro
   somaTotal, i, j: inteiro

// Função
funcao somarMatriz (): inteiro
var
   i, j, somador: inteiro
inicio
   // Inicialização
   somador <- 0

   // Loop para processamento
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         somador <- somador + minhaMatriz[i,j]
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
         Escreva("Informe o valor para [", i, ",", j, "]: ")
         Leia(minhaMatriz[i,j])
      fimpara
   fimpara

   Escreval

   // Chamada da função
   somaTotal <- somarMatriz()

   // Saída de dados
   Escreval("A soma de todos os elementos é: ", somaTotal)

// Fim da execução
fimalgoritmo

// Faça uma função que calcule a soma de
// todos elementos de uma matriz[5,5];