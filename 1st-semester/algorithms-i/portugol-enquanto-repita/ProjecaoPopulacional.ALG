algoritmo "ProjecaoPopulacional"

// Variáveis
var
   paisA, paisB: real
   anos: inteiro

// Início
inicio
   paisA <- 5000000
   paisB <- 7000000
   anos <- 0

   // Processamento em Loop
   enquanto (paisB >= paisA) faca
      paisA <- paisA * 1.03
      paisB <- paisB * 1.02
      anos <- anos + 1
   fimenquanto

   // Saída de dados
   Escreval("Demorou ", anos, " anos para o País A passar o País B")

// Fim da execução
fimalgoritmo

// Dado um país A com 5.000.000 de habitantes e uma taxa de
// natalidade de 3% ao no, e um país B com 7.000.000 de habitantes
// e uma taxa de natalidade de 2% ao ano, calcular e imprimir o tempo
// necessário para que a população do país A ultrapasse a população
// do país B.