algoritmo "CompararMaiorMenor"

// Variáveis
var
   a, b: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B (!= ", a, "): ")
   Leia(b)

   // Lógica condicional para saída de dados
   se (a > b) entao
      Escreval("(A) - Maior valor: ", a)
      Escreval("(B) - Menor valor: ", b)
   senao
      Escreval("(B) - Maior valor: ", b)
      Escreval("(A) - Menor valor: ", a)
   fimse

// Fim da execução
fimalgoritmo

// Construa um algoritmo em PORTUGOL que imprima qual o menor
// e qual o maior valor de dois números A e B, lidos através do teclado.