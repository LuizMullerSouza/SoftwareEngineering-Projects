algoritmo "AniversariantesDoMes"

// Registro
Tipo info = Registro
   nome: caractere
   dia: inteiro
   mes: inteiro
FimRegistro

// Variáveis
var
   pessoa: vetor [1..40] de info
   i, m: inteiro

// Início
inicio
   // Título
   Escreval("======================================")
   Escreval(" Cadastro de Aniversários (40 Pessoas) ")
   Escreval("======================================")
   Escreval("")

   // Loop para cadastro
   para i <- 1 ate 40 passo 1 faca
      Escreval("Cadastrando ", i, "ª Pessoa")
      Escreva("Informe o nome: ")
      Leia(pessoa[i].nome)
      Escreva("Informe o dia de aniversário: ")
      Leia(pessoa[i].dia)
      Escreva("Informe o mês de aniversário (1-12): ")
      Leia(pessoa[i].mes)
      Escreval("")
   fimpara

   // Loop para listagem
   Escreval("======================================")
   Escreval("    Listagem de Aniversariantes    ")
   Escreval("======================================")
   para m <- 1 ate 12 passo 1 faca
      Escreval("")
      Escreval("--- Aniversariantes do Mês: ", m, " ---")

      para i <- 1 ate 40 passo 1 faca
         // Lógica condicional para filtrar
         se (pessoa[i].mes = m) entao
            Escreval(pessoa[i].nome, " - Dia: ", pessoa[i].dia)
         fimse
      fimpara
   fimpara

// Fim da execução
fimalgoritmo

// Dados os seguintes campos de um registro: nome,
// dia de aniversário e mês de aniversário, desenvolver
// um algoritmo que mostre em cada um dos meses do
// ano quem são as pessoas que fazem aniversário, exibir
// também o dia. Considere um conjunto de 40 pessoas