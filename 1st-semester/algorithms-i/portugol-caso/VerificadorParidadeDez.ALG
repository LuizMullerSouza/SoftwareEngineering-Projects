algoritmo "VerificadorParidadeDez"

// Variáveis
var
   numero, flag: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro: ")
   Leia(numero)

   // Processamento
   flag <- numero mod 2

   // Lógica condicional para saída de dados
   escolha flag
      caso 0
         se (numero < 10) entao
            Escreval("Número par menor que 10")
         senao
            Escreval("Número fora do intervalo")
         fimse
      caso 1
         se (numero < 10) entao
            Escreval("Número ímpar menor que 10")
         senao
            Escreval("Número fora do intervalo")
         fimse
   fimescolha

// Fim da execução
fimalgoritmo

// Faça um algoritmo que leia um número qualquer.
// Caso o número seja par menor que 10, escreva
// 'Número par menor que Dez', caso o número digitado
// seja ímpar menor que 10 escreva 'Número Ímpar
// menor que Dez', caso contrário Escreva 'Número fora
// do Intervalo'.