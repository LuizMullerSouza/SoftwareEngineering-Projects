algoritmo "RelatorioPorGenero"

// Registro
Tipo info = Registro
   nome: caractere
   sexo: inteiro
   olho: caractere
   altura: real
   peso: real
   dnasc: caractere
FimRegistro

// Variáveis
var
   pessoa: vetor [1..10] de info
   i, flagH, flagM: inteiro

// Início
inicio
   // Inicialização
   flagH <- 0
   flagM <- 0

   // Processamento
   Escreval("--- Cadastro das 10 Pessoas ---")
   para i <- 1 ate 10 passo 1 faca
      Escreval("Cadastrando ", i, "ª Pessoa")
      Escreva("Informe o nome: ")
      Leia(pessoa[i].nome)
      Escreva("Informe o sexo (1 - Homem | 0 - Mulher): ")
      Leia(pessoa[i].sexo)

      // Lógica condicional para as flags
      se (pessoa[i].sexo = 1) entao
         flagH <- 1
      senao
         flagM <- 1
      fimse

      Escreva("Informe a cor dos olhos: ")
      Leia(pessoa[i].olho)
      Escreva("Informe a altura: ")
      Leia(pessoa[i].altura)
      Escreva("Informe o peso: ")
      Leia(pessoa[i].peso)
      Escreva("Informe a data de nascimento: ")
      Leia(pessoa[i].dnasc)
      Escreval("")
   fimpara

   Escreval("====================================")
   Escreval("")

   // Saída de dados
   se (flagH = 0) entao
      Escreval("Nenhum homem foi cadastrado!")
   senao
      Escreval("--- Listagem | Homens ---")
      para i <- 1 ate 10 passo 1 faca
         se (pessoa[i].sexo = 1) entao
            Escreval("Nome: ", pessoa[i].nome)
            Escreval("Cor dos olhos: ", pessoa[i].olho)
            Escreval("Altura: ", pessoa[i].altura)
            Escreval("Peso: ", pessoa[i].peso)
            Escreval("Data de Nascimento: ", pessoa[i].dnasc)
            Escreval("")
         fimse
      fimpara
   fimse

   Escreval("====================================")
   Escreval("")

   // Saída de dados
   se (flagM = 0) entao
      Escreval("Nenhuma mulher foi cadastrada!")
   senao
      Escreval("--- Listagem | Mulheres ---")
      para i <- 1 ate 10 passo 1 faca
         se (pessoa[i].sexo = 0) entao
            Escreval("Nome: ", pessoa[i].nome)
            Escreval("Cor dos olhos: ", pessoa[i].olho)
            Escreval("Altura: ", pessoa[i].altura)
            Escreval("Peso: ", pessoa[i].peso)
            Escreval("Data de Nascimento: ", pessoa[i].dnasc)
            Escreval("")
         fimse
      fimpara
   fimse

// Fim da execução
fimalgoritmo

// Suponha que você esteja realizando uma pesquisa e precise
// obter os seguintes dados de um conjunto de n pessoas, onde
// n é no máximo 1000: NOME, SEXO, COR DOS OLHOS, ALTURA,
// PESO E DATA DE NASCIMENTO. O campo SEXO apresenta o
// valor 1 quando indica sexo masculino e o valor 0 quando representa
// as mulheres.  Crie um algoritmo que realize a leitura desses dados
// e imprima duas listagens. A primeira listagem deve conter todos os
// que são de sexo masculino e  outra deve conter todos os que são
// de sexo feminino. Ou seja, vamos apenas criar uma listagem dos
// homens e outra das mulheres.