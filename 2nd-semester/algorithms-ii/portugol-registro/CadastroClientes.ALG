algoritmo "CadastroClientes"

// Registro
Tipo info = Registro
   nome: caractere
   cpf: inteiro
   rg: inteiro
   data_nasc: caractere
   sexo: caractere
   endereco: caractere
FimRegistro

// Variáveis
var
   cliente: vetor [1..50] de info
   i: inteiro

// Início
inicio
   // Título
   Escreval("=======================")
   Escreval(" Cadastrador de Clientes ")
   Escreval("=======================")
   Escreval("")

   // Loop para cadastro
   para i <- 1 ate 50 passo 1 faca
      Escreval("--------------------------")
      Escreval("Cadastrando o ", i, "° Cliente")
      Escreval("--------------------------")

      Escreva("Informe o nome: ")
      Leia(cliente[i].nome)

      Escreva("Informe o CPF: ")
      Leia(cliente[i].cpf)

      Escreva("Informe o RG: ")
      Leia(cliente[i].rg)

      Escreva("Informe a data de nascimento (DD/MM/AAAA): ")
      Leia(cliente[i].data_nasc)

      Escreva("Informe o sexo (M/F): ")
      Leia(cliente[i].sexo)

      Escreva("Informe o endereço: ")
      Leia(cliente[i].endereco)
      Escreval("")

   fimpara

   // Saída de dados
   Escreval("")
   Escreval("====================================")
   Escreval("Clientes cadastrados com sucesso!")
   Escreval("====================================")

// Fim da execução
fimalgoritmo

// Faça um algoritmo que permita ao usuário cadastrar
// 50 clientes. Deve-se utilizar os seguintes campos:
// Nome, CPF, RG, Data Nascimento, Sexo, Endereço