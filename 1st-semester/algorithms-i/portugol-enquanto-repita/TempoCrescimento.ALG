algoritmo "TempoCrescimento"

// Variáveis
var
   chico, juca: real
   anos: inteiro

// Início
inicio
   chico <- 1.5
   juca <- 1.1
   anos <- 0

   // Processamento
   enquanto (chico >= juca) faca
      chico <- chico + 0.02
      juca <- juca + 0.03
      anos <- anos + 1
   fimenquanto

   // Saída de dados
   Escreval("Juca levou ", anos, " anos para passar Chico")

// Fim da execução
fimalgoritmo

// Chico tem 1,50m e cresce dois centímetros por ano,
// enquanto Juca tem 1,10m e cresce 3 centímetros por
// ano. Construir um algoritmo que calcule e imprima
// quantos anos serão necessários para que Juca seja
// maior que Chico.