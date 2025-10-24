algoritmo "VerificadorMultiploTres"

// Variáveis
var
   numero: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor inteiro: ")
   Leia(numero)

   // Lógica condicional para saída de dados
   se (numero mod 3 = 0) entao
      Escreval("Seu número é múltiplo de 3")
   senao
      Escreval("Seu número não é múltiplo de 3")
   fimse

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que receba
// um número e imprima uma das mensagens: “é múltiplo
// de 3” ou “não é múltiplo de 3”.