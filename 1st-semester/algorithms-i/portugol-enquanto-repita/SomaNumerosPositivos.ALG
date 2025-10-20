algoritmo "SomaNumerosPositivos"

// Variáveis
var
   n, somador: inteiro

// Início
inicio
   somador <- 0

   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe um valor inteiro e positivo (-1 para sair): ")
      Leia(n)

      // Processamento
      se (n >= 0) entao
         somador <- somador + n
      senao
         se (n <> -1) entao
            Escreval("Números negativos não são válidos.")
         fimse
      fimse
   ate (n = -1)

   // Saída de dados
   Escreval("A soma dos números digitados é: ", somador)

// Fim da execução
fimalgoritmo

// Construa um algoritmo em PORTUGOL para fazer a soma
// de vários valores inteiros e positivos, fornecidos pelo usuário
// através do teclado. O dado que finaliza a sequência de entrada
// é o número –1, e este não deve ser considerado.