algoritmo "CalculadoraTabuada"

// Variáveis
var
   numero, tabuada, i: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro para calcular a tabuada: ")
   Leia(numero)

   Escreval
   Escreval("--- Tabuada do ", numero, " ---")

   // Loop para processamento da tabuada
   para i <- 1 ate 10 passo 1 faca
      tabuada <- numero * i
      Escreval(numero, " x ", i, " = ", tabuada)
   fimpara

// Fim da execução
fimalgoritmo

// Fazer um algoritmo para calcular a tabuada
// de um número qualquer, dado pelo usuário.