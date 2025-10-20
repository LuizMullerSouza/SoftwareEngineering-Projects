algoritmo "MediaNumerosPositivos"

// Variáveis
var
   numero, cont: inteiro
   media: real

// Início
inicio
   media <- 0
   cont <- 0

   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe um número (negativo para sair): ")
      Leia(numero)

      // Processamento
      se (numero >= 0) entao
         // Media é a variável acumuladora
         media <- media + numero
         cont <- cont + 1
      senao
         Escreval("Número negativo: saindo do algoritmo!")
      fimse
   ate (numero < 0)

   // Processamento e Saída de dados
   se (cont > 0) entao
      media <- media / cont
      Escreval(cont, " números foram digitados e a média foi: ", media:0:2)
   senao
      Escreval("Saindo do algoritmo sem digitar nenhum número válido.")
   fimse

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia números enquanto forem positivos
// e imprima a média dos números digitados.