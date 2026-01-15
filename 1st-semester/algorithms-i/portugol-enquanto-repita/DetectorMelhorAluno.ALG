algoritmo "DetectorMelhorAluno"

// Variáveis
var
   numeroalunos, i: inteiro
   nota, melhornota: real
   aluno, melhoraluno: caractere

// Início
inicio
   // Inicialização
   i <- 1

   // Entrada e leitura de dados
   Escreva("Quantos alunos a turma tem? ")
   Leia(numeroalunos)

   Escreval

   // Loop para processamento
   enquanto (i <= numeroalunos) faca
      Escreval("--- Aluno ", i, " ---")
      Escreva("Qual o nome do aluno: ")
      Leia(aluno)
      Escreva("Qual a nota do aluno: ")
      Leia(nota)

      // Lógica condicional
      se (i = 1) entao
         melhoraluno <- aluno
         melhornota <- nota
      senao
         se (nota > melhornota) entao
            melhornota <- nota
            melhoraluno <- aluno
         fimse
      fimse

      // Incremento
      i <- i + 1
      Escreval
   fimenquanto

   // Saída de dados
   Escreval("O melhor aluno da turma foi ", melhoraluno, " com a nota ", melhornota)

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia a quantidade de alunos
// de uma turma. Em seguida, leia o nome e a nota de cada
// aluno e determine qual obteve o melhor desempenho,
// exibindo seu nome e sua respectiva nota ao final.