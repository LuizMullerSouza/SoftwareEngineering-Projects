algoritmo "CalculadoraFatorial"

// Variáveis
var
   numero, fatorial, i: inteiro

// Início
inicio
   // Inicialização
   fatorial <- 1

   // Entrada e leitura de dados
   Escreva("Digite um número inteiro para calcular o fatorial: ")
   Leia(numero)

   // Loop para cálculo do fatorial
   para i <- numero ate 1 passo -1 faca
      fatorial <- fatorial * i
   fimpara

   Escreval

   // Saída de dados
   Escreval(numero, "! = ", fatorial)

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL para calcular o fatorial
// do número N, cujo valor é obtido através do usuário pelo teclado.