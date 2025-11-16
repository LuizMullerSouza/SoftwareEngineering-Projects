algoritmo "RelatorioNotasAlunos"

// Registro
Tipo info = Registro
   nome: caractere
   matricula: inteiro
   n1: real
   n2: real
FimRegistro

// Variáveis
var
   aluno: vetor [1..30] de info
   media: real
   i: inteiro

// Início
inicio
   // Título
   Escreval("=======================")
   Escreval("  Cadastro de Alunos (30)  ")
   Escreval("=======================")
   Escreval("")

   // Loop para cadastro
   para i <- 1 ate 30 passo 1 faca
      Escreval("Cadastrando ", i, "° Aluno")
      Escreva("Informe o nome: ")
      Leia(aluno[i].nome)
      Escreva("Informe a matrícula: ")
      Leia(aluno[i].matricula)
      Escreva("Informe a primeira nota: ")
      Leia(aluno[i].n1)
      Escreva("Informe a segunda nota: ")
      Leia(aluno[i].n2)
      Escreval("")
   fimpara

   // Loop para listagem
   Escreval("=======================")
   Escreval("   Lista | Resultados   ")
   Escreval("=======================")
   Escreval("")
   para i <- 1 ate 30 passo 1 faca
      Escreval("--- Aluno ", i, " ---")
      Escreval("Nome: ", aluno[i].nome)
      Escreval("Matrícula: ", aluno[i].matricula)

      // Cálculo da média
      media <- (aluno[i].n1 + aluno[i].n2) / 2

      Escreval("Média: ", media:0:1)
      Escreval("")
   fimpara

// Fim da execução
fimalgoritmo

// Escrever um algoritmo que cadastre o nome,
// a matrícula e duas notas de  30 alunos. Em
// seguida imprima a matrícula, o nome e a média
// de cada um deles.