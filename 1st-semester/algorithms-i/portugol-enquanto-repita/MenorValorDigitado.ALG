algoritmo "MenorValorDigitado"

// Variáveis
var
   n, menor, aux: inteiro

// Início
inicio
   aux <- 1

   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe um valor qualquer (-1 para sair): ")
      Leia(n)

      // Processamento
      se (n <> -1) entao
         se (aux = 1) entao
            menor <- n
            aux <- aux + 1
         senao
            se (n < menor) entao
               menor <- n
            fimse
         fimse
      fimse
   ate (n = -1)

   // Saída de dados
   se (aux = 1) entao
      Escreval("Nenhum valor foi digitado.")
   senao
      Escreval ("O menor valor digitado foi: ", menor)
   fimse

// Fim da execução
fimalgoritmo

// Construa um algoritmo em PORTUGOL para que:
// Dado um conjunto de valores inteiros e positivos,
// digitados pelo usuário através do teclado, determinar
// qual o menor valor do conjunto. O algoritmo deve
// imprimir o valor determinado. Quando o usuário decidir
// que finalizou a entrada de dados, ele deve digitar –1, e
// este dado não deve ser considerado.