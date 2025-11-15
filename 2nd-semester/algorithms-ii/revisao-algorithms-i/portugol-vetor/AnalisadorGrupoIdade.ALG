algoritmo "AnalisadorGrupoIdade"

// Variáveis
var
   nome: vetor[1..15] de caractere
   idade: vetor[1..15] de inteiro
   i, somador, menor, maior, flag: inteiro
   media: real

// Início
inicio
   // Inicialização
   flag <- 0
   somador <- 0

   // Processamento
   Escreval("--- Leitura dos 15 nomes e idades ---")
   para i <- 1 ate 15 passo 1 faca
      Escreva("Informe o nome da ", i, "ª pessoa: ")
      Leia(nome[i])
      Escreva("Informe a idade da ", i, "ª pessoa: ")
      Leia(idade[i])
      
      Escreval

      somador <- somador + idade[i]

      // Lógica condicional para menor e maior
      se (i = 1) entao
         menor <- idade[i]
         maior <- idade[i]
      senao
         se (idade[i] < menor) entao
            menor <- idade[i]
         fimse
         se(idade[i] > maior) entao
            maior <- idade[i]
         fimse
      fimse
   fimpara

   // Cálculo da média
   media <- somador / 15

   Escreval

   // Saída de dados
   Escreval("--- Pessoas com idade abaixo da média (", media:0:1, ") ---")
   para i <- 1 ate 15 passo 1 faca
      se (idade[i] < media) entao
         Escreval(nome[i])
         flag <- 1
      fimse
   fimpara

   // Verificação lógica
   se (flag = 0) entao
      Escreval("Nenhuma pessoa com idade abaixo da média!")
   fimse

   Escreval

   // Saída de dados
   Escreval("Menor idade encontrada: ", menor)
   Escreval("Maior idade encontrada: ", maior)

// Fim da execução
fimalgoritmo

// Faça um algoritmo que leia 15 nomes de pessoas
// e suas respectivas idades. Após isso, calcule a média
// das idades e exiba o nome das pessoas com idade
// abaixo da média, bem como a maior e a menor idade
// encontradas.