algoritmo "SomaComParametros"

// Variáveis
var
   x, y: inteiro

// Procedimento
procedimento soma(a, b: inteiro)
var
   r: inteiro
inicio
   // Processamento
   r <- a + b

   // Saída de dados
   Escreval("Resultado da Soma: ", r)
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(x)
   Escreva("Informe o segundo valor: ")
   Leia(y)

   // Chamada do procedimento
   soma(x, y)

// Fim da execução
fimalgoritmo

// Criar um algoritmo que realize a soma de dois valores,
// utilizando procedimento com passagem de parâmetros por valor.