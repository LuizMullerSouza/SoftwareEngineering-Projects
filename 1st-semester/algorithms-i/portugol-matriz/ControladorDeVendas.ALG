algoritmo "ControladorDeVendas"

// Variáveis
var
   venda: vetor [1..12, 1..4] de real
   totalMes: vetor [1..12] de real
   totalAno: real
   i, j: inteiro

// Início
inicio
   // Inicialização
   totalAno <- 0

   // Loop para entrada e leitura de dados
   Escreval("--- Lançamento de Vendas ---")
   para i <- 1 ate 12 passo 1 faca

      // Acumulador do mêes
      totalMes[i] <- 0

      Escreval("--- Mês ", i, " ---")
      para j <- 1 ate 4 passo 1 faca
         Escreva("Venda da Semana ", j, ": R$")
         Leia(venda[i,j])

         // Acumula no total do mês
         totalMes[i] <- totalMes[i] + venda[i,j]

         // Acumula no total do ano
         totalAno <- totalAno + venda[i,j]
      fimpara

      Escreval
   fimpara

   Escreval("---------------------------------")
   Escreval("       RELATÓRIO DE VENDAS       ")
   Escreval("---------------------------------")

   // Relatório semanal
   Escreval(">> Vendas por Semana:")
   para i <- 1 ate 12 passo 1 faca
      Escreval("Mês ", i, ":")
      para j <- 1 ate 4 passo 1 faca
         Escreva("  Semana ", j, ": R$", venda[i,j]:9:2)
      fimpara
      Escreval
   fimpara

   Escreval("--------------------------------")

   // Relatório mensal
   Escreval(">> Vendas por Mês:")
   para i <- 1 ate 12 passo 1 faca
      Escreval("  Mês ", i, ": R$", totalMes[i]:9:2)
   fimpara

   Escreval("--------------------------------")

   // Relatório anual
   Escreval(">> Vendas por Ano: R$", totalAno:9:2)

// Fim da execução
fimalgoritmo

// Criar um algoritmo que carregue uma matriz 12 x 4 com os valores
// das vendas de uma loja, em que cada linha represente um mês do ano,
// e cada coluna, uma semana do mês. Para fins de simplificação considere
// que cada mês possui somente 4 semanas. Calcule e imprima:
// - Total vendido em cada mês do ano;
// - Total vendido em cada semana durante todo o ano;
// - Total vendido no ano.