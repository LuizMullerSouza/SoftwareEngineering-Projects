algoritmo "SomaCondicionalTres"

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

   // Processamento para soma
   soma <- n1 + n2

   // Lógica condicional para cálculo e saída de dados
   se (soma > 20) entao
      soma <- soma + 8
      Escreval("Resultado: ", soma)
   senao
      soma <- soma - 5
      Escreval("Resultado: ", soma)
   fimse

// Fim da execução
fimalgoritmo

// Construir um algoritmo em PORTUGOL
// que leia dois números e efetue a adição.
// Se o valor somado  for maior que 20, este
// deverá ser apresentado somando-se a ele
// mais 8; senão o valor deverá ser apresentado
// subtraindo-se 5.