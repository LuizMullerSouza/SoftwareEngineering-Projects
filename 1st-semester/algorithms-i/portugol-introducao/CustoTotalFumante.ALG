algoritmo "CustoTotalFumante"

// Variáveis
var
   tempAnos, precoCarteira, dinheiroGasto: real
   cigDia, quantCarteira: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe a quantos anos você fuma: ")
   Leia(tempAnos)
   Escreva("Informe quantos cigarros você fuma por dia: ")
   Leia(cigDia)
   Escreva("Informe o preço da carteira de cigarro: ")
   Leia(precoCarteira)
   Escreva("Informe a quantidade de cigarro em uma carteira: ")
   Leia(quantCarteira)

   // Processamento
   dinheiroGasto <- ((cigDia / quantCarteira) * precoCarteira) * (tempAnos * 365.25)

   // Saída de dados
   Escreval("Você já gastou R$", dinheiroGasto:0:2, " com cigarros")

// Fim da execução
fimalgoritmo

// Calcular a quantidade dinheiro gasta por um fumante. Dados: o
// número de anos que ele fuma, o nº de cigarros fumados por dia,
// preço de uma carteira e quantidade cigarro em uma carteira de
// cigarro.