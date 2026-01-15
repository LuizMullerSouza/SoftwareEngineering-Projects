algoritmo "CalculoDecaimentoRadioativo"

// Variáveis
var
   massa: real
   tempo: inteiro

// Início
inicio
   // Inicialização
   tempo <- 0

   // Entrada e leitura de dados
   Escreva("Informe a massa inicial do material (gramas): ")
   Leia(massa)

   // Loop para processamento
   enquanto (massa >= 0.05) faca
      massa <- massa / 2
      tempo <- tempo + 50
   fimenquanto

   Escreval

   // Saída de dados
   Escreval("Massa final restante: ", massa:0:4, "g")
   Escreval("Tempo total necessário: ", tempo, " segundos")

// Fim da execução
fimalgoritmo

// Um determinado material radioativo perde metade de sua massa
// a cada 50 segundos. Dada a massa inicial, em gramas, faça um
// programa que determine o tempo necessário para que essa massa
// se torne menor que 0,05 gramas.