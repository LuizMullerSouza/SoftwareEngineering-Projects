algoritmo "VerificadorFaixaPreco"

// Variáveis
var
   minimo, maximo, valor: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor mínimo desejado: R$")
   Leia(minimo)
   Escreva("Informe o valor máximo desejado: R$")
   Leia(maximo)
   Escreval("---------------------------------")
   Escreva("Informe o valor do veículo: R$")
   Leia(valor)
   Escreval

   // Processamento e Saída de dados
   se ((valor >= minimo) e (valor <= maximo)) entao
      Escreval("VALOR DENTRO DAS POSSIBILIDADES")
   senao
      Escreval("VALOR FORA DAS POSSIBILIDADES")
   fimse

// Fim da execução
fimalgoritmo

// Um vendedor de carros quer desenvolver um algoritmo que
// verifique se o valor do carro está entre a faixa de preço que o
// cliente deseja. [...] Quando o valor do carro desejado for informado,
// deve-se verificar se este valor encontra-se entre a faixa de preço
// desejada. Caso esteja então escreverá “VALOR DENTRO DAS
// POSSIBILIDADES” se não “VALOR FORA DAS POSSIBILIDADES”