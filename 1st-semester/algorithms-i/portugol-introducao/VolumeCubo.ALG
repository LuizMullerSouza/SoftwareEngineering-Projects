algoritmo "VolumeCubo"

// Variáveis
var
   aresta, volume: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor da aresta do cubo: ")
   Leia(aresta)

   // Processamento
   volume <- aresta ^ 3

   // Saída de dados
   Escreval("O volume do seu cubo é: ", volume:0:2, " unidades cúbicas")

// Fim da execução
fimalgoritmo

// Crie um algoritmo que leia o valor da aresta de um cubo e
// calcule seu volume. Fórmula: Volume = aresta ^ 3