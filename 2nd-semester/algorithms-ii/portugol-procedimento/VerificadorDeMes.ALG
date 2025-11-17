algoritmo "VerificadorDeMes"

// Variáveis
var
   numMes: inteiro

// Procedimento
procedimento mes (n: inteiro)
inicio
   // Lógica condicional para saída
   escolha n
      caso 1
         Escreval("Janeiro!")
      caso 2
         Escreval("Fevereiro!")
      caso 3
         Escreval("Março!")
      caso 4
         Escreval("Abril!")
      caso 5
         Escreval("Maio!")
      caso 6
         Escreval("Junho!")
      caso 7
         Escreval("Julho!")
      caso 8
         Escreval("Agosto!")
      caso 9
         Escreval("Setembro!")
      caso 10
         Escreval("Outubro!")
      caso 11
         Escreval("Novembro!")
      caso 12
         Escreval("Dezembro!")
      outrocaso
         Escreval("Mês inexistente!")
   fimescolha
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o número de um mês (1-12): ")
   Leia(numMes)
   Escreval

   // Chamada do procedimento
   mes(numMes)

// Fim da execução
fimalgoritmo

// Escreva um procedimento que receba um número
// inteiro e imprima o mês correspondente ao número.
// Por exemplo, 2 corresponde à “fevereiro”.