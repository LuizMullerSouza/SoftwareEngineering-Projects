algoritmo "CriadorDeTabuadas"

// Variáveis
var
   num: inteiro

// Procedimento
procedimento tabuada (n: inteiro)
var
   i, resultado: inteiro
inicio
   // Título
   Escreval("Tabuada do número ", n)
   Escreval("--------------------")

   // Processamento
   para i <- 1 ate 10 passo 1 faca
      resultado <- n * i

      // Saída de dados
      Escreval(n, " x ", i, " = ", resultado)
   fimpara
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número para ver a tabuada: ")
   Leia(num)
   Escreval

   // Chamada do procedimento
   tabuada(num)

// Fim da execução
fimalgoritmo

// Faça um procedimento que receba como
// parâmetro um número inteiro e exibe na
// tela  a tabuada de multiplicação até 10 do
// número lido.