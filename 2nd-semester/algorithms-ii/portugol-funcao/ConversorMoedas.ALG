algoritmo "ConversorMoedas"
// Cotações de Outubro/2025

// Variáveis
var
   n, valor: real
   opcao: inteiro

// Função para dólar
funcao dolar (val: real): real
var
   novoValor: real
inicio
   novoValor <- val * 0.19
   retorne novoValor
fimfuncao

// Função para libra
funcao libra (val: real): real
var
   novoValor: real
inicio
   novoValor <- val * 0.14
   retorne novoValor
fimfuncao

// Função para franco
funcao franco (val: real): real
var
   novoValor: real
inicio
   novoValor <- val * 0.15
   retorne novoValor
fimfuncao

// Função para iene
funcao iene (val: real): real
var
   novoValor: real
inicio
   novoValor <- val * 27.86
   retorne novoValor
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor em reais: R$")
   Leia(n)

   Escreval
   Escreval("--- Opção de Menu ---")
   Escreval("1 - Dólar | 2 - Libra | 3 - Franco | 4 - Iene")
   Escreva("Informe a opção (1 a 4): ")
   Leia(opcao)
   Escreval

   // Lógica condicional para chamada das funções
   escolha opcao
      caso 1
         valor <- dolar(n)
         Escreval("Valor em dólar: US$", valor:0:2)
      caso 2
         valor <- libra(n)
         Escreval("Valor em libra: £", valor:0:2)
      caso 3
         valor <- franco(n)
         Escreval("Valor em franco: ", valor:0:2, " CHF")
      caso 4
         valor <- iene(n)
         Escreval("Valor em iene: ¥", valor:0:2)
      outrocaso
         Escreval("Erro: opção inválida!")
   fimescolha

// Fim da execução
fimalgoritmo

// Elabore um algoritmo que seja capaz de fazer a conversão
// de uma valor em real para o correspondente em dólar, libra,
// franco e iene. O algoritmo deverá conter um menu com as
// opções que levará para cada sub-rotina e as mesmas deve
// retornar os resultados para o corpo principal do algoritmo,
// que deve encarregar-se da exibição.