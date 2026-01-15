algoritmo "ContadorIntervalo30a90"

// Variáveis
var
   numero, i, total: inteiro

// Início
inicio
   // Inicialização
   total <- 0

   // Loop para entrada, leitura e processamento dos dados
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° número inteiro: ")
      Leia(numero)

      // Lógica condicional para localizar os números entre 30 e 90
      se (numero > 30) e (numero < 90) entao
         total <- total + 1
      fimse
   fimpara

   Escreval

   // Lógica condicional para saída de dados
   se (total = 0) entao
      Escreval("Nenhum número digitado está entre 30 e 90")
   senao
      se (total = 1) entao
         Escreval("Ao total, apenas 1 número digitado está entre 30 e 90")
      senao
         Escreval("Ao total ", total, " números digitados estão entre 30 e 90")
      fimse
   fimse

// Fim da execução
fimalgoritmo

// Faça um algoritmo que receba 10 números e que
// calcule e mostre quantos números estão entre 30 e 90.