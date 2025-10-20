algoritmo "CalculoInvestimento"

// Variáveis
var
   cod, tip: inteiro
   valor, nvalor: real

// Início
inicio
   // Loop
   repita
      // Entrada e leitura de dados
      Escreva("Informe o seu código (<= 0 para sair): ")
      Leia(cod)

      // Processamento
      se (cod <= 0) entao
         Escreval("Programa encerrado.")
      senao
         // Entrada e leitura de dados
         Escreva("Informe o valor do investimento: R$")
         Leia(valor)
         Escreval
         Escreval("[1] Poupança - 1,5%")
         Escreval("[2] Poupança Plus - 2%")
         Escreval("[3] Fundos de Renda Fixa - 4%")
         Escreva("Escolha um investimento: ")
         Leia(tip)
         Escreval

         // Processamento
         escolha tip
            caso 1
               nvalor <- valor * 1.015
               Escreval("O valor com rendimento mensal é: R$", nvalor:0:2)
            caso 2
               nvalor <- valor * 1.02
               Escreval("O valor com rendimento mensal é: R$", nvalor:0:2)
            caso 3
               nvalor <- valor * 1.04
               Escreval("O valor com rendimento mensal é: R$", nvalor:0:2)
            outrocaso
               Escreval("Investimento Inválido.")
         fimescolha
         Escreval("-----------------------------------------")
      fimse
   ate (cod <= 0)

// Fim da execução
fimalgoritmo

// Uma agência bancária possui vários clientes que podem fazer
// investimentos com rendimentos mensais, conforme a tabela
// abaixo. Faça um algoritmo que leia o código do cliente, o tipo
// do investimento e o valor investido, e que calcule e mostre o
// rendimento mensal de acordo com o tipo de investimento. A
// leitura terminará quando o código do cliente for menor ou igual a 0.
// Tipo Descrição  e Rendimento mensal:
// 1) Poupança - 1,5%
// 2) Poupança plus - 2%
// 3) Fundos de renda fixa -  4%