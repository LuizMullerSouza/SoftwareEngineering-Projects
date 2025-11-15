algoritmo "PesquisaDeCusto"

// Registro
Tipo info = Registro
   codigo: inteiro
   nome: caractere
   preco: real
FimRegistro

// Variáveis
var
   pesquisa: vetor [1..20] de info
   i: inteiro

// Início
inicio
   // Título
   Escreval("=======================")
   Escreval("  Pesquisa de Custo  ")
   Escreval("=======================")
   Escreval("")

   // Loop para cadastro
   Escreval("--- Cadastro dos 20 Produtos ---")
   para i <- 1 ate 20 passo 1 faca
      Escreval("Informações da ", i, "ª Pesquisa")
      Escreva("Informe o código do produto: ")
      Leia(pesquisa[i].codigo)
      Escreva("Informe o nome do produto: ")
      Leia(pesquisa[i].nome)
      Escreva("Informe o preço do produto: R$")
      Leia(pesquisa[i].preco)
      Escreval("")
   fimpara

   // Loop para listagem
   Escreval("=======================")
   Escreval("   Listagem dos Produtos   ")
   Escreval("=======================")
   Escreval("")
   para i <- 1 ate 20 passo 1 faca
      Escreval("--- Produto ", i, " ---")
      Escreval("Código do produto: ", pesquisa[i].codigo)
      Escreval("Nome do produto: ", pesquisa[i].nome)
      Escreval("Preço do produto: R$", pesquisa[i].preco:0:2)
      Escreval("")
   fimpara

// Fim da execução
fimalgoritmo

// Uma empresa deseja realizar uma pesquisa de custo de um
// determinado tipo de produto. Essa pesquisa usará os seguintes
// dados: código, nome do produto e preço. Desenvolva um algoritmo
// em Portugol que permita ao usuário cadastrar 20 registros da pesquisa,
// a pós isso, os produtos que foram cadastrados devem ser listados.