algoritmo "TempoCrescimento"

// Variáveis
var
   chico, juca: real
   anos: inteiro

// Início
inicio
   // Inicialização
   chico <- 1.5
   juca <- 1.1
   anos <- 0

   // Loop para processamento
   enquanto (juca <= chico) faca
      chico <- chico + 0.02
      juca <- juca + 0.03
      anos <- anos + 1
   fimenquanto

   // Saída de dados
   Escreval("Levou ", anos, " anos para Juca ser maior que Chico")

// Fim da execução
fimalgoritmo

// Chico tem 1,50m e cresce dois centímetros por ano, enquanto
// Juca tem 1,10m e cresce 3 centímetros por ano. Construir um
// algoritmo que calcule e imprima quantos anos serão necessários
// para que Juca seja maior que Chico.