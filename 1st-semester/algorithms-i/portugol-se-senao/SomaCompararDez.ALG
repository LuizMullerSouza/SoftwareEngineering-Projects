algoritmo "SomaCompararDez"

// Variáveis
var
   n1, n2, soma: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(n1)
   Escreva("Informe o segundo valor: ")
   Leia(n2)

   // Processamento
   soma <- n1 + n2

   // Lógica condicional para saída de dados
   se (soma > 10) entao
      Escreval("A soma (", soma, ") é maior que 10")
   senao
      Escreval("A soma (", soma, ") é menor que 10")
   fimse

// Fim da execução
fimalgoritmo

// Construa um algoritmo em PORTUGOL que leia dois valores numéricos
// inteiros e efetue a adição entre eles; se o resultado for maior que 10,
// apresentá-lo senão informe “Valor menor que 10”.