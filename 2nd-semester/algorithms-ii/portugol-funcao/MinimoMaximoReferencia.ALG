algoritmo "MinimoMaximoReferencia"

// Variáveis
var
   n1, n2, n3, menor, maior: inteiro
   verificador: logico

// Função
funcao minMax (x1, x2, x3: inteiro; var min, max: inteiro): logico
inicio
   // Inicialização
   max <- x1
   min <- x1

   // Comparação com o segundo valor
   se (x2 > max) entao
      max <- x2
   fimse
   se (x2 < min) entao
      min <- x2
   fimse

   // Comparação com o terceiro valor
   se (x3 > max) entao
      max <- x3
   fimse
   se (x3 < min) entao
      min <- x3
   fimse

   // Verificação lógica
   se (min = max) entao
      retorne falso
   senao
      retorne verdadeiro
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(n1)
   Escreva("Informe o segundo valor: ")
   Leia(n2)
   Escreva("Informe o terceiro valor: ")
   Leia(n3)
   Escreval

   // Chamada da função
   verificador <- minMax(n1, n2, n3, menor, maior)

   // Saída de dados
   se (verificador = verdadeiro) entao
      Escreval("O MENOR valor entre os três números: ", menor)
      Escreval("O MAIOR valor entre os três números: ", maior)
   senao
      Escreval("Todos os valores são iguais!")
   fimse

// Fim da execução
fimalgoritmo

// Crie uma função minMax que receba três números inteiros por
// valor, e duas variáveis por referência para armazenar o menor
// e o maior valor. Mostre os resultados no programa principal.