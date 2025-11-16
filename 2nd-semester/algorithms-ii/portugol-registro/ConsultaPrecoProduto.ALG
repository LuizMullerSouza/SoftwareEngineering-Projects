algoritmo "ConsultaPrecoProduto"

// Registro
Tipo info = Registro
   codigo: inteiro
   nome: caractere
   preco: real
FimRegistro

// Variáveis
var
   produto: vetor [1..100] de info
   i, checker, flag: inteiro

// Início
inicio
   // Inicialização
   flag <- 0

   // Loop para cadastro
   Escreval("--- Cadastro de 100 Produtos ---")
   para i <- 1 ate 100 passo 1 faca
      Escreval("Cadastrando ", i, "° Produto")
      Escreva("Informe o código: ")
      Leia(produto[i].codigo)
      Escreva("Informe o nome: ")
      Leia(produto[i].nome)
      Escreva("Informe o preço: R$")
      Leia(produto[i].preco)
      Escreval("")
   fimpara

   // Loop para listagem
   Escreval("====================================")
   Escreval("        Listagem de Produtos        ")
   Escreval("====================================")
   Escreval("")
   para i <- 1 ate 100 passo 1 faca
      Escreval("Produto ", i)
      Escreval("  Código: ", produto[i].codigo)
      Escreval("  Nome: ", produto[i].nome)
      Escreval("")
   fimpara

   Escreval("====================================")
   Escreval("")

   // Entrada de dados
   Escreva("Informe o código de um produto para consultar o preço: ")
   Leia(checker)
   Escreval("")

   // Loop para busca e consulta
   para i <- 1 ate 100 passo 1 faca
      se (produto[i].codigo = checker) entao
         Escreval("--- Produto Encontrado ---")
         Escreval("Código: ", produto[i].codigo)
         Escreval("Nome: ", produto[i].nome)
         Escreval("Preço: R$", produto[i].preco:0:2)
         flag <- 1
      fimse
   fimpara

   // Verificação lógica
   se (flag = 0) entao
      Escreval("404: Produto não encontrado")
   fimse

// Fim da execução
fimalgoritmo

// Escrever um  algoritmo que cadastre 100 produtos.
// Em seguida, imprima uma lista com o código e nome
// da cada produto. Por último, consulte o preço de um
// produto através de seu código.