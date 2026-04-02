algoritmo "EscreverNumeroExtenso"

// Variáveis
var
   numero: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor inteiro (0 a 5): ")
   Leia(numero)

   // Lógica condicional para saída de dados
   escolha numero
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
         Escreval("Seu número está fora do intervalo prescrito")
   fimescolha

// Fim da execução
fimalgoritmo

// Faça um algoritmo que o usuário informa um numero de
// 0 a 5 e terá como resultado o numero por extenso.