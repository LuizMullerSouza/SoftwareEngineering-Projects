algoritmo "NumeroPorExtenso"

// Variáveis
var
   valor: inteiro

// Procedimento
procedimento escreverValor (n: inteiro)
inicio
   // Lógica condicional para saída
   escolha n
      caso 0
         Escreval("Zero")
      caso 1
         Escreval("Um")
      caso 2
         Escreval("Dois")
      caso 3
         Escreval("Três")
      caso 4
         Escreval("Quatro")
      caso 5
         Escreval("Cinco")
      caso 6
         Escreval("Seis")
      caso 7
         Escreval("Sete")
      caso 8
         Escreval("Oito")
      caso 9
         Escreval("Nove")
      caso 10
         Escreval("Dez")
      outrocaso
         Escreval("Erro: o número informado deve estar entre 0 a 10!")
   fimescolha
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor de 0 a 10: ")
   Leia(valor)
   Escreval

   // Chamada do procedimento
   escreverValor(valor)

// Fim da execução
fimalgoritmo

// Crie também um algoritmo que leia um valor inteiro e chame um
// procedimento para impressão do número extenso. O procedimento
// receba um número inteiro e o imprima na forma extensa. Por
// exemplo, para 1 a saída desejada é “Um”.  O procedimento  deve
// ser  capaz  de gerar o extenso dos números de 0 até 10, inclusive.
// Caso um número não compatível seja recebido o procedimento deve
// mostrar uma mensagem de erro.