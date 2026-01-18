algoritmo "AnaliseTemperaturas"

// Variáveis
var
   temperaturaDia: vetor [1..121] de real
   menorTemp, maiorTemp, mediaTemp: real
   quantDias, i: inteiro

// Início
inicio
   // Inicialização
   mediaTemp <- 0
   quantDias <- 0

   Escreval("--- Registro de Temperaturas - Janeiro a Abril de 1976 ---")

   // Loop para entrada, leitura de dados, encontrar menor e maior valor e acumular a média
   para i <- 1 ate 121 passo 1 faca
      Escreva("Informe a temperatura (°C) do ", i, "º dia: ")
      Leia(temperaturaDia[i])

      mediaTemp <- mediaTemp + temperaturaDia[i]

      // Lógica condicional para encontrar o menor e maior valor
      se (i = 1) entao
         menorTemp <- temperaturaDia[i]
         maiorTemp <- temperaturaDia[i]
      senao
         se (temperaturaDia[i] < menorTemp) entao
            menorTemp <- temperaturaDia[i]
         fimse

         se (temperaturaDia[i] > maiorTemp) entao
            maiorTemp <- temperaturaDia[i]
         fimse
      fimse
   fimpara

   // Cálculo da média final
   mediaTemp <- mediaTemp / 121

   // Loop para contar os dias abaixo da média
   para i <- 1 ate 121 passo 1 faca
      se (temperaturaDia[i] < mediaTemp) entao
         quantDias <- quantDias + 1
      fimse
   fimpara

   Escreval
   
   // Saída de dados
   Escreval("--- Relatório Climático ---")
   Escreval("Menor Temperatura: ", menorTemp:0:1, " °C")
   Escreval("Maior Temperatura: ", maiorTemp:0:1, " °C")
   Escreval("Média das Temperaturas: ", mediaTemp:0:2, " °C")
   Escreval("Número de dias com temperatura inferior à média: ", quantDias, " dias")

// Fim da execução
fimalgoritmo

// Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias),
// não ocorreu temperatura inferior a 15ºC nem superior a 40ºC. Fazer um algoritmo
// em PORTUGOL que calcule e imprima:
// - A menor temperatura ocorrida;
// - A maior temperatura ocorrida;
// - A temperatura média;
// - O número de dias nos quais a temperatura foi inferior à temperatura média.