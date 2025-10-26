algoritmo "CalculoCreditoEspecial"

// Variáveis
var
   saldoMedio, valorCredito: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o seu saldo médio: R$")
   Leia(saldoMedio)

   // Lógica condicional para cálculo
   se (saldoMedio <= 500) entao
      valorCredito <- 0
   senao
      se (saldoMedio <= 1000) entao
         valorCredito <- saldoMedio * 0.3
      senao
         se (saldoMedio <= 3000) entao
            valorCredito <- saldoMedio * 0.4
         senao
            valorCredito <- saldoMedio * 0.5
         fimse
      fimse
   fimse

   // Saída de dados
   Escreval("Saldo Médio: R$", saldoMedio:0:2)

   // Lógica condicional para saída de dados
   se (valorCredito = 0) entao
      Escreval("Crédito Concebido: Nenhum crédito")
   senao
      Escreval("Crédito Concebido: R$", valorCredito:0:2)
   fimse

// Fim da execução
fimalgoritmo

// A CEF concederá um crédito especial para seus clientes,
// leia o saldo médio de um cliente e calcule o valor do
// crédito de acordo com a tabela a seguir. Imprimir uma
// mensagem informando o saldo médio e o valor de crédito.
// --- TABELA ---
// Saldo Médio | Percentual
// De 0 a 500 | Nenhum crédito
// De 501 a 1000 | 30% do valor do saldo médio
// De 1001 a 3000 | 40% do valor do saldo médio
// Acima de 3001 | 50% do valor do saldo médio