algoritmo "ListagemNumerosPequenos"

// Variáveis
var
   vetPrincipal: vetor [1..30] de inteiro
   i: inteiro

// Procedimento
procedimento listar()
var
   j, flag: inteiro
inicio
   flag <- 0
   Escreval
   Escreval("Listagem dos números inseridos que são menores que 10:")

   para j <- 1 ate 30 passo 1 faca
      se (vetPrincipal[j] < 10) entao
         Escreval(vetPrincipal[j], " na posição ", j)
         flag <- 1
      fimse
   fimpara

   Escreval
   se (flag = 0) entao
      Escreval("Nenhum número menor que 10 foi listado.")
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   para i <- 1 ate 30 passo 1 faca
      Escreva("Informe o ", i, "° valor: ")
      Leia(vetPrincipal[i])
   fimpara

   // Chamada do procedimento
   listar()

// Fim da execução
fimalgoritmo

// Criar um algoritmo que lê 30 números e depois lista
// quais deles são menores que 10, usando um procedimento.