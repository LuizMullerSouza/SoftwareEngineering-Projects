algoritmo "ListaCalculadoraIMC"

// Registro
Tipo info = Registro
   nome: caractere
   altura: real
   peso: real
   cpf: inteiro
   sexo: caractere
FimRegistro

// Variáveis
var
   pessoa: vetor [1..50] de info
   i, checker, flag: inteiro
   imc: real

// Início
inicio
   // Inicialização
   flag <- 0

   // Loop para cadastro
   Escreval("--- Cadastro das 50 Pessoas ---")
   para i <- 1 ate 50 passo 1 faca
      Escreval("Cadastrando ", i, "ª Pessoa")
      Escreva("Informe o nome: ")
      Leia(pessoa[i].nome)
      Escreva("Informe a altura: ")
      Leia(pessoa[i].altura)
      Escreva("Informe o peso: ")
      Leia(pessoa[i].peso)
      Escreva("Informe o CPF: ")
      Leia(pessoa[i].cpf)
      Escreva("Informe o sexo (M/F): ")
      Leia(pessoa[i].sexo)
      Escreval("")
   fimpara

   Escreval("====================================")

   // Entrada de dados
   Escreva("Informe um CPF para pesquisar: ")
   Leia(checker)
   Escreval("")

   // Loop para busca
   para i <- 1 ate 50 passo 1 faca
      se (pessoa[i].cpf = checker) entao
         // Cálculo do IMC
         imc <- pessoa[i].peso / (pessoa[i].altura ^ 2)

         // Saída de dados
         se ((pessoa[i].sexo = "M") ou (pessoa[i].sexo = "m")) entao
            Escreval("IMC do ", pessoa[i].nome, ": ", imc:0:2)
         senao
            Escreval("IMC da ", pessoa[i].nome, ": ", imc:0:2)
         fimse

         flag <- 1
      fimse
   fimpara

   // Verificação lógica
   se (flag = 0) entao
      Escreval("Nenhuma pessoa encontrada com o CPF informado!")
   fimse

// Fim da execução
fimalgoritmo

// Escrever um algoritmo que cadastre o nome, a altura, o peso, o CPF e
// sexo de 50 pessoas. Com os dados cadastrados, em seguida localizar
// uma pessoas através do seu CPF e imprimir o seu IMC.