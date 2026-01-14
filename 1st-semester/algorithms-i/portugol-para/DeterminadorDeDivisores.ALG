algoritmo "DeterminadorDeDivisores"

// Variáveis
var
   numero, i: inteiro

// Início
inicio

   // Entrada e leitura de dados
   Escreva("Digite um número para determinar seus divisores: ")
   Leia(numero)

   Escreval

   Escreval("--- Divisores de ", numero, " ---")

   // Loop para cálculo dos divisores
   para i <- numero ate 1 passo -1 faca
      // Lógica condicional
      se (numero mod i = 0) entao
         Escreval(i, " é divisor de ", numero)
      fimse
   fimpara

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que determine
// todos os divisores de um dado número N.