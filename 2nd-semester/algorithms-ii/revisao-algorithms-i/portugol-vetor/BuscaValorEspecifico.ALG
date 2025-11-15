algoritmo "BuscaValorEspecifico"

// Variáveis
var
   vet: vetor [1..30] de inteiro
   i, flag: inteiro

// Início
inicio
   // Inicialização
   flag <- 0

   // Loop para entrada de dados
   Escreval("--- Preenchendo o Vetor (30 posições) ---")
   para i <- 1 ate 30 passo 1 faca
      Escreva("Informe o ", i, "º valor: ")
      Leia(vet[i])
   fimpara

   Escreval

   // Processamento
   Escreval("--- Buscando o valor 50 ---")
   para i <- 1 ate 30 passo 1 faca
      // Lógica condicional para busca
      se (vet[i] = 50) entao
         Escreval("Valor 50 encontrado na posição ", i, " do vetor")
         flag <- 1
      fimse
   fimpara

   // Saída de dados
   se (flag = 0) entao
      Escreval("Nenhum valor 50 encontrado!")
   fimse

// Fim da execução
fimalgoritmo

// Faça um algoritmo que leia 30 posições inteira
// e verifique se existem valores iguais a 50 . Se
// existirem, escreva a posição a qual o valor se
// encontra no vetor.