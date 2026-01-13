algoritmo "LocalizadorDeJovensMasculinos"

// Variáveis
var
   sexo, idade, i: inteiro
   nome: caractere

// Início
inicio
   // Loop para leitura de 20 pessoas
   para i <- 1 ate 20 passo 1 faca
      // Entrada e leitura de dados
      Escreval("--- Dados da Pessoa ", i, " ---")

      Escreva("Informe seu nome: ")
      Leia(nome)

      Escreva("Informe sua idade: ")
      Leia(idade)

      Escreva("Informe seu sexo (1 - Masc | 2 - Fem): ")
      Leia(sexo)

      // Verificação Lógica
      se (sexo = 1) e (idade > 21) entao
         Escreval(">> Selecionado: ", nome)
      fimse

      Escreval("")
   fimpara

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia o nome, a idade e o sexo de
// 20 pessoas. Escreva o nome se a pessoa for do sexo masculino
// e tiver mais de 21 anos.