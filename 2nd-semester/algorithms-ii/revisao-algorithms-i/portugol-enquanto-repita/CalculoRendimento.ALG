algoritmo "CalculoRendimento"

// Variáveis
var
   cod, tipoInvestimento: inteiro
   valor, rendimento: real

// Início
inicio
   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe o código de cliente (<= 0 para sair): ")
      Leia(cod)
      Escreval

      // Lógica condicional
      se (cod <= 0) entao
         Escreval("Leitura encerrada.")
      senao
         // Entrada e leitura de dados
         Escreval("1 - Poupança | 2 - Poupança Plus | 3 - Fundos de Renda Fixa")
         Escreva("Informe o tipo de investimento: ")
         Leia(tipoInvestimento)
         Escreva("Informe o valor a investir: R$")
         Leia(valor)
         Escreval

         // Lógica condicional para cálculo
         escolha tipoInvestimento
            caso 1
               rendimento <- valor * 0.015
            caso 2
               rendimento <- valor * 0.02
            caso 3
               rendimento <- valor * 0.04
            outrocaso
               Escreval("Erro: tipo inválido")
         fimescolha

         // Lógica condicional para saída de dados
         se ((tipoInvestimento = 1) ou (tipoInvestimento = 2) ou (tipoInvestimento = 3)) entao
            Escreval("Rendimento mensal: R$", rendimento:0:2)
         fimse
         Escreval("-----------------------------------------")
      fimse
   ate (cod <= 0)

// Fim da execução
fimalgoritmo

// Uma agência bancária possui vários clientes que podem fazer
// investimentos com rendimentos mensais, conforme a tabela abaixo.
// Faça um algoritmo que leia o código do cliente, o tipo do investimento
// e o valor investido, e que calcule e mostre o rendimento mensal de acordo
// com o tipo de investimento. A leitura terminará quando o código do cliente
// for menor ou igual a 0.
// Tipo Descrição e Rendimento mensal:
// 1 Poupança - 1,5%
// 2 Poupança plus - 2%
// 3 Fundos de renda fixa - 4%