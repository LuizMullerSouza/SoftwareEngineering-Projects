algoritmo "CalculoModulo"

// Variáveis
var
   numero: inteiro

// Procedimento
procedimento calcularModulo (n: inteiro)
var
   nPositivo: inteiro
inicio
   // Lógica condicional para cálculo
   se (n >= 0) entao
      Escreval("|", n, "| = ", n)
   senao
      nPositivo <- n * (-1)
      Escreval("|", n, "| = ", nPositivo)
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro: ")
   Leia(numero)
   Escreval

   // Chamada do procedimento
   calcularModulo(numero)

// Fim da execução
fimalgoritmo

// Faça um procedimento que receba um número
// como entrada e retorne o módulo deste número.