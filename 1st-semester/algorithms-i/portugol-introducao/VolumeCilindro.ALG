algoritmo "VolumeCilindro"

// Variáveis
var
   raio, altura, volume: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o tamanho do raio da base do cilindro: ")
   Leia(raio)
   Escreva("Informe o tamanho da altura do cilindro: ")
   Leia(altura)

   // Processamento
   volume <- Pi * raio ^ 2 * altura

   // Saída de dados
   Escreval("O volume do cilindro é: ", volume:0:2, " unidades cúbicas")

// Fim da execução
fimalgoritmo

// Crie um algoritmo que leia o raio da base e a altura
// de um cilindro e calcule seu volume.
// Fórmula: Volume = ? * Raio^2 * Altura