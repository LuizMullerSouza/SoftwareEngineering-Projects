algoritmo "CalculoGraosXadrez"

// Variáveis
var
   quadro: inteiro
   graos_casa, total_graos: real

// Início
inicio
   // Inicialização
   total_graos <- 0
   graos_casa <- 1

   Escreval("Calculando progressão do tabuleiro...")

   // Loop para processamento de todos os grãos
   para quadro <- 1 ate 64 passo 1 faca

      se (quadro = 1) entao
         graos_casa <- 1
         total_graos <- 1
      senao
         // Dobra o valor
         graos_casa <- graos_casa * 2
         total_graos <- total_graos + graos_casa
      fimse
      
      se (quadro <= 5) ou (quadro >= 60) entao
          Escreval("Casa ", quadro, ": ", graos_casa)
      fimse
   fimpara

   Escreval

   // Saída de dados
   Escreval("-----------------------------------------------------")
   Escreval("Total de grãos que o monge recebeu: ", total_graos)
   Escreval("-----------------------------------------------------")
   Escreval("Obs: O resultado é apresentado em notação científica")
   Escreval("devido ao tamanho gigantesco do número.")

// Fim da execução
fimalgoritmo

// Uma rainha requisitou os serviços de um monge e disse-lhe que
// pagaria qualquer preço... Crie um algoritmo para calcular o
// total de grãos que o monge recebeu.