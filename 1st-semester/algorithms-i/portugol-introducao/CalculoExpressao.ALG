algoritmo "CalculoExpressao"

// Variáveis
var
   a, b, c, resultado: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B: ")
   Leia(b)
   Escreva("Informe o valor de C: ")
   Leia(c)

   // Processamento
   resultado <- (a * 2) + (b * 3) * c / 6

   // Saída de dados
   Escreval("Expressão (a x 2) + (b x 3) x c/6")
   Escreval("Resultado da Expressão: ", resultado)

// Fim da execução
fimalgoritmo

// Crie um algoritmo que resolva a seguinte
// expressão, após receber os valores de a,
// b e c: (a x 2) + (b x 3) x c/6