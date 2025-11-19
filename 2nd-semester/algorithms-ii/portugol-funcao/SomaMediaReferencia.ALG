algoritmo "SomaMediaReferencia"

// Variáveis
var
   n1, n2, n3, soma: inteiro
   media: real

// Função
funcao calcular (x1, x2, x3: inteiro; var mediaCopia: real): inteiro
var
   somaCopia: inteiro
inicio
   // Cálculo da soma
   somaCopia <- x1 + x2 + x3

   // Cálculo da média na mémoria da variável
   mediaCopia <- somaCopia / 3

   // Retorno da soma
   retorne somaCopia
fimfuncao

// Início
inicio
   // Inicialização
   media <- 0

   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(n1)
   Escreva("Informe o segundo valor: ")
   Leia(n2)
   Escreva("Informe o terceiro valor: ")
   Leia(n3)
   Escreval

   // Chamada da função
   soma <- calcular(n1, n2, n3, media)

   // Saída de dados
   Escreval("A soma dos três números é: ", soma)
   Escreval("A média dos três números é: ", media:0:2)

// Fim da execução
fimalgoritmo

// Crie uma função chamada calcular que receba três valores inteiros
// por valor e retorne a soma, mas também receba uma variável por
// referência para armazenar a média. No final, mostre a soma e a média
// no programa principal.