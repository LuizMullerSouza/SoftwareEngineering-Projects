algoritmo "CalculadoraDeDobros"

// Variáveis
var
   num: inteiro

// Procedimento
procedimento dobrar (valor: inteiro)
var
   resultado: inteiro
inicio
   // Processamento
   resultado <- valor * 2

   // Saída de dados
   Escreval("O resultado é: ", resultado)
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor: ")
   Leia(num)

   // Chamada do procedimento
   dobrar(num)

// Fim da execução
fimalgoritmo

// Crie um procedimento que receba um valor como
// parâmetro e escreva o dobro desse número.