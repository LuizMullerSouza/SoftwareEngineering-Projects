algoritmo "ReajusteDePreco"

// Variáveis
var
   preco, precoReajustado: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o preço do produto: R$")
   Leia(preco)

   // Processamento
   precoReajustado <- preco * 1.1

   // Saída de dados
   Escreval("O produto com preço reajustado custa R$", precoReajustado:0:2)

// Fim da execução
fimalgoritmo

// Um feirante deseja realizar um reajuste no preços de suas mercadorias.
// Ele definiu o índice de reajuste de 10%. Agora ele deseja desenvolver um
// algoritmo que permitirá que o funcionário informe o valor do produto e o
// mesmo retornará o preço com o aumento.