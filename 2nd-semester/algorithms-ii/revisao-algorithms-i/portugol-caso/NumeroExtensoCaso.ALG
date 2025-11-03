algoritmo "NumeroExtensoCaso"

// Variáveis
var
   n: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor de 0 a 5: ")
   Leia(n)

   // Lógica condicional para saída de dados
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
      outrocaso
         Escreval("Erro: número inválido")
   fimescolha

// Fim da execução
fimalgoritmo

// Faça um algoritmo que o usuário informa um número
// de 0 a 5 e terá como resultado o numero por extenso.