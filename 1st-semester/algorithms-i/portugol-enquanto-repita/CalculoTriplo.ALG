algoritmo "CalculoTriplo"

// Variáveis
var
   n, triplo: inteiro

// Início
inicio
   // Loop
   repita
      // Entrada e leitura de dados
      Escreva("Informe um número inteiro (digite -999 para sair): ")
      Leia(n)

      // Processamento e Saída de dados
      se (n = -999) entao
         Escreval("Programa Encerrado.")
      senao
         triplo <- n * 3
         Escreval("O triplo de ", n, " é ", triplo)
         Escreval("----------------------------")
      fimse
   ate (n = -999)

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que receba números
// do usuário e imprima o triplo de cada número. O algoritmo
// deve encerrar quando o número –999 for digitado.