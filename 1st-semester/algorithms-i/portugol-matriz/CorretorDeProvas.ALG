algoritmo "CorretorDeProvas"

// Variáveis
var
   resposta: vetor [1..100, 1..10] de caractere
   gabarito: vetor [1..10] de caractere
   notaAluno: vetor [1..100] de inteiro
   i, j: inteiro

// Início
inicio
   Escreval("--- SISTEMA DE CORREÇÃO DE PROVAS ---")
   Escreval("Atenção: Use apenas A, B, C ou D Maiúsculas")
   Escreval
   
   // Entrada e leitura das respostas dos 100 alunos
   Escreval("LEITURA DAS PROVAS DOS ALUNOS")
   para i <- 1 ate 100 passo 1 faca
      Escreval("--- Aluno ", i, " ---")
      para j <- 1 ate 10 passo 1 faca
      
         // Validação para a entrada das questões
         repita
            Escreva("Questão ", j, ": ")
            Leia(resposta[i,j])
            se (resposta[i,j] <> "A") e (resposta[i,j] <> "B") e (resposta[i,j] <> "C") e (resposta[i,j] <> "D") entao
               Escreval(">> Erro! Digite apenas A, B, C ou D.")
            fimse
         ate (resposta[i,j] = "A") ou (resposta[i,j] = "B") ou (resposta[i,j] = "C") ou (resposta[i,j] = "D")

      fimpara
      Escreval
   fimpara

   // Entrada e leitura do gabarito do professor
   Escreval("LEITURA DO GABARITO OFICIAL")
   para j <- 1 ate 10 passo 1 faca
      repita
         Escreva("Gabarito Questão ", j, ": ")
         Leia(gabarito[j])
         se (gabarito[j] <> "A") e (gabarito[j] <> "B") e (gabarito[j] <> "C") e (gabarito[j] <> "D") entao
            Escreval(">> Erro! Digite apenas A, B, C ou D.")
         fimse
      ate (gabarito[j] = "A") ou (gabarito[j] = "B") ou (gabarito[j] = "C") ou (gabarito[j] = "D")
   fimpara
   Escreval
   
   // Exibição do resultado das notas
   Escreval("RESULTADOS FINAIS")
   para i <- 1 ate 100 passo 1 faca
      notaAluno[i] <- 0

      // Lógica condicional para comparar as questões
      para j <- 1 ate 10 passo 1 faca
         se (gabarito[j] = resposta[i,j]) entao
            notaAluno[i] <- notaAluno[i] + 1
         fimse
      fimpara

      Escreval("Aluno ", i, " - Nota Final: ", notaAluno[i], "/10")
   fimpara

// Fim da execução
fimalgoritmo

// Leia uma matriz 100 x 10 que se refere respostas de 10 questões
// de múltipla escolha, referentes a 100 alunos. Leia também um vetor
// de 10 posições contendo o gabarito d e respostas que podem ser a, b,
// c ou d. Seu programa deverá comparar as respostas de cada candidato
// com o gabarito e emitir um vetor Resultado, contendo a pontuação
// correspondente.