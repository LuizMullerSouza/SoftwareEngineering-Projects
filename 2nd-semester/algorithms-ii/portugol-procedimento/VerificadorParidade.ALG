algoritmo "VerificadorParidade"

// Variáveis
var
   num: inteiro

// Procedimento
procedimento paridade (n: inteiro)
inicio
   // Lógica condicional
   se (n mod 2 = 0) entao
      Escreval(n, " é PAR!")
   senao
      Escreval(n, " é ÍMPAR!")
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número: ")
   Leia(num)
   Escreval

   // Chamada do procedimento
   paridade(num)

// Fim da execução
fimalgoritmo

// Faça um procedimento que receba
// um número como entrada e retorne
// uma mensagem caso este número for
// par, e outra mensagem caso contrário.