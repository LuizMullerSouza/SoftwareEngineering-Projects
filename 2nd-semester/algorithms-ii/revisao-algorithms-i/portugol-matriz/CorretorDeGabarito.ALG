algoritmo "CorretorDeGabarito"

// Variáveis
var
   respostas: vetor de [1..100, 1..10] de caractere
   gabarito: vetor de [1..10] de caractere
   resultado: vetor de [1..100] de inteiro
   i, j: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Cadastro do Gabarito ---")
   para j <- 1 ate 10 passo 1 faca
      Escreva("Informe a resposta correta da questão ", j, ": ")
      Leia(gabarito[j])
   fimpara

   Escreval

   // Processamento
   Escreval("--- Leitura das Respostas dos Alunos ---")
   para i <- 1 ate 100 passo 1 faca
      // Inicialização
      resultado[i] <- 0

      Escreval("Respostas do ", i, "° aluno:")
      para j <- 1 ate 10 passo 1 faca
         Escreva("Questão ", j, ": ")
         Leia(respostas[i,j])

         // Lógica condicional para correção
         se (respostas[i,j] = gabarito[j]) entao
            resultado[i] <- resultado[i] + 1
         fimse
      fimpara
      Escreval
   fimpara

   Escreval

   // Saída de dados
   Escreval("--- Notas Finais ---")
   para i <- 1 ate 100 passo 1 faca
      Escreval ("Nota do ", i, "° aluno: ", resultado[i])
   fimpara

// Fim da execução
fimalgoritmo

// Leia uma matriz 100 x 10 que se refere respostas
// de 10 questões de múltipla escolha, referentes a
// 100 alunos. Leia também um vetor de 10 posições
// contendo o gabarito d e respostas que podem ser
// a, b, c ou d. Seu programa deverá comparar as
// respostas de cada candidato com o gabarito e emitir
// um vetor Resultado, contendo a pontuação correspondente.