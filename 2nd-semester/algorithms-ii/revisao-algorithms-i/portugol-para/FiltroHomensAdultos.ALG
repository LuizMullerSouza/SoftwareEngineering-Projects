algoritmo "FiltroHomensAdultos"

// Variáveis
var
   nome, sexo: caractere
   idade, i: inteiro

// Início
inicio
   // Loop para processamento
   para i <- 1 ate 20 passo 1 faca
      Escreval("----------------------------")
      Escreval("Pessoa ", i, " de 20:")
      Escreva("Informe seu nome: ")
      Leia(nome)
      Escreva("Informe sua idade: ")
      Leia(idade)
      Escreva("Informe seu sexo (M - Masculino | F - Feminino): ")
      Leia(sexo)

      // Lógica condicional para saída de dados
      se (idade > 21) entao
         se ((sexo = "M") ou (sexo = "m")) entao
            Escreval("Nome (atende aos critérios): ", nome)
         fimse
      fimse
   fimpara

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia o nome, a idade e
// o sexo de 20 pessoas. Escreva o nome se a pessoa
// for do sexo masculino e tiver mais de 21 anos.