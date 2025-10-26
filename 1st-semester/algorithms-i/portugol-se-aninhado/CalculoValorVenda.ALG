algoritmo "CalculoValorVenda"

// Variáveis
var
   valorCompra, valorVenda: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor da compra: R$")
   Leia(valorCompra)

   // Lógica condicional para cálculo
   se (valorCompra < 10) entao
      valorVenda <- valorCompra * 1.7
   senao
      se (valorCompra < 30) entao
         valorVenda <- valorCompra * 1.5
      senao
         se (valorCompra < 50) entao
            valorVenda <- valorCompra * 1.4
         senao
            valorVenda <- valorCompra * 1.3
         fimse
      fimse
   fimse

   // Saída de dados
   Escreval("Valor da venda recalculado: R$", valorVenda:0:2)

// Fim da execução
fimalgoritmo

// Um comerciante calcula o valor da venda, tendo em
// vista a tabela a seguir. Criar um algoritmo em PORTUGOL
// que leia o valor da compra e imprima o valor da venda.
// --- TABELA ---
// Valor da Compra | Valor da Venda
// Valor < R$ 10,00 | Lucro de 70%
// R$ 10,00 <= Valor < R$ 30,00 | Lucro de 50%
// R$ 30,00 <= Valor < R$ 50,00 | Lucro de 40%
// Valor >= R$ 50,00 | Lucro de 30%