algoritmo "VerificadorAprovacao"

// Variáveis
var
   nota: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe a nota de um aluno: ")
   Leia(nota)

   // Processamento e Saída de dados
   se (nota >= 60) entao
      Escreval("APROVADO!")
   senao
      Escreval("REPROVADO!")
   fimse

// Fim da execução
fimalgoritmo

// Desenvolva um algoritmo que solicite que
// o usuário entre com a nota de uma aluno.
// Caso a nota seja maior ou igual a 60, então
// escreva a palavra “APROVADO!” senão
// “REPROVADO”