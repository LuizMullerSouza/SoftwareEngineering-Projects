algoritmo "ContadorParesImpares"

// Variáveis
var
   numero, pares, impares, i: inteiro

// Início
inicio
   // Inicialização
   pares <- 0
   impares <- 0

   // Loop para processamento
   para i <- 1 ate 200 passo 1 faca
      Escreva("Digite o ", i, "° número inteiro: ")
      Leia(numero)

      // Lógica condicional
      se (numero mod 2 = 0) entao
         pares <- pares + 1
      senao
         impares <- impares + 1
      fimse
   fimpara

   Escreval

   // Saída de dados
   Escreval("Quantidade de números pares digitados: ", pares)
   Escreval("Quantidade de números ímpares digitados: ", impares)

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que leia 200 números
// inteiros e imprima quantos são pares e quantos são ímpares.