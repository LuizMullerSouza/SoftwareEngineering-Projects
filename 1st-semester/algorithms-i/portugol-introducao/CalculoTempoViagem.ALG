algoritmo "CalculoTempoViagem"

// Variáveis
var
   km, velocidadeMedia, tempo: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe a distância da viagem (km): ")
   Leia(km)
   Escreva("Informe a velocidade média do veículo (km/h): ")
   Leia(velocidadeMedia)

   // Processamento
   tempo <- km / velocidadeMedia

   // Saída de dados
   Escreval("Seu tempo de viagem é: ", tempo:0:1, " horas")

// Fim da execução
fimalgoritmo

// Crie um algoritmo que leia a distância a ser percorrida
// (em km) e a velocidade média do veículo (em km/h), e
// calcule o tempo estimado da viagem.
// Fórmula: Tempo = Distancia / Velocidade