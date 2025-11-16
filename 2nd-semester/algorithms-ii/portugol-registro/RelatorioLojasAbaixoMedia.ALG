algoritmo "RelatorioLojasAbaixoMedia"

// Registro
Tipo info = Registro
   nome: caractere
   telefone: inteiro
   preco: real
FimRegistro

// Variáveis
var
   loja: vetor [1..15] de info
   media: real
   i, flag: inteiro

// Início
inicio
   // Inicialização
   media <- 0
   flag <- 0

   // Processamento
   Escreval("--- Cadastro das 15 Lojas ---")
   para i <- 1 ate 15 passo 1 faca
      Escreval("Cadastrando informações da ", i, "ª Loja")
      Escreva("Informe o nome da loja: ")
      Leia(loja[i].nome)
      Escreva("Informe o telefone da loja: ")
      Leia(loja[i].telefone)
      Escreva("Informe o preço de um eletrodoméstico: R$")
      Leia(loja[i].preco)

      // Acumulador da média
      media <- media + loja[i].preco
      Escreval("")
   fimpara

   // Cálculo da média
   media <- media / 15
   Escreval("====================================")
   Escreval("A média de preço dos 15 produtos é: R$", media:0:2)
   Escreval("====================================")
   Escreval("")

   // Saída de dados
   Escreval("--- Lojas com preço ABAIXO da média ---")
   para i <- 1 ate 15 passo 1 faca
      // Lógica condicional para filtragem
      se (loja[i].preco < media) entao
         Escreval("Loja: ", loja[i].nome)
         Escreval("Telefone: ", loja[i].telefone)
         Escreval("Preço: R$", loja[i].preco:0:2)
         Escreval("")
         flag <- 1
      fimse
   fimpara

   // Verificação lógica
   se (flag = 0) entao
      Escreval("Nenhum preço está abaixo da média!")
   fimse

// Fim da execução
fimalgoritmo

// Uma pessoa cadastrou um conjunto de 15 registros
// contendo o nome da loja, telefone e preço de um
// eletrodoméstico. Desenvolver um algoritmo que permita
// exibir qual foi a média dos preços cadastrados e uma
// relação contendo o nome e o telefone das lojas cujo
// preço estava abaixo da média;