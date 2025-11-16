algoritmo "ConsultaDisciplinasAlunos"

// Registro
Tipo info = Registro
   nome: caractere
   matricula: inteiro
   curso: caractere
   disciplinas: caractere
FimRegistro

// Variáveis
var
   aluno: vetor [1..40] de info
   i, flag, verifier: inteiro

// Início
inicio
   // Inicialização
   flag <- 0

   // Loop para cadastro
   Escreval("--- Cadastro de 40 Alunos ---")
   para i <- 1 ate 40 passo 1 faca
      Escreval("Cadastro do ", i, "° Aluno")
      Escreva("Informe o nome: ")
      Leia(aluno[i].nome)
      Escreva("Informe o número de matrícula: ")
      Leia(aluno[i].matricula)
      Escreva("Informe o curso: ")
      Leia(aluno[i].curso)
      Escreva("Informe o nome de todas as disciplinas estudadas: ")
      Leia(aluno[i].disciplinas)
      Escreval("")
   fimpara

   // Loop para listagem
   Escreval("====================================")
   Escreval("         Listagem de Alunos         ")
   Escreval("====================================")
   Escreval("")
   para i <- 1 ate 40 passo 1 faca
      Escreval("Aluno: ", aluno[i].nome)
      Escreval("  Curso: ", aluno[i].curso)
      Escreval("")
   fimpara

   // Entrada de dados
   Escreval("====================================")
   Escreval("")
   Escreva("Informe o número de matrícula de um aluno para consulta: ")
   Leia(verifier)
   Escreval("")

   // Loop para busca e consulta
   para i <- 1 ate 40 passo 1 faca
      se (flag = 0) entao
         se (aluno[i].matricula = verifier) entao
            Escreval("--- Aluno Encontrado! ---")
            Escreval("Disciplinas: ", aluno[i].disciplinas)
            flag <- 1
         fimse
      fimse
   fimpara

   // Verificação lógica
   se (flag = 0) entao
      Escreval("Erro: a matrícula informada não corresponde a nenhum aluno cadastrado.")
   fimse

// Fim da execução
fimalgoritmo

// Escrever um algoritmo que cadastre o nome, o número de matrícula, o curso
// e as disciplinas cursadas por 40 alunos de uma universidade. Em seguida:
// Mostre uma lista com o nome e curso de todos os alunos. Depois, permita
// ao usuário consultar todas as disciplinas de um aluno informando sua matrícula.