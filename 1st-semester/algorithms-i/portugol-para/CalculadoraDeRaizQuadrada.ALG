algoritmo "CalculadoraDeRaizQuadrada"

// Variáveis
var
   numero, i: inteiro
   raiz: real

// Início
inicio
   Escreval("--- Cálculo de Raiz Quadrada | 15 números ---")

   // Loop para realizar 15 leituras
   para i <- 1 ate 15 passo 1 faca
      Escreva("Informe o ", i, "º número inteiro: ")
      Leia(numero)
      
      // Cálculo da raiz
      raiz <- RaizQ(numero)

      // Exibição do resultado
      Escreval("Raiz quadrada de ", numero, " = ", raiz:1:2)
      Escreval("")
   fimpara

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que receba quinze números
// do usuário e imprima a raiz quadrada de cada número.