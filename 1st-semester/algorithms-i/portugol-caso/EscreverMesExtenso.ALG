algoritmo "EscreverMesExtenso"

// Variáveis
var
   mes: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o número de um mês: ")
   Leia(mes)

   // Lógica condicional para saída de dados
   escolha mes
      caso 1
         Escreval("Janeiro")
      caso 2
         Escreval("Fevereiro")
      caso 3
         Escreval("Março")
      caso 4
         Escreval("Abril")
      caso 5
         Escreval("Maio")
      caso 6
         Escreval("Junho")
      caso 7
         Escreval("Julho")
      caso 8
         Escreval("Agosto")
      caso 9
         Escreval("Setembro")
      caso 10
         Escreval("Outubro")
      caso 11
         Escreval("Novembro")
      caso 12
         Escreval("Dezembro")
      outrocaso
         Escreval("Erro: mês inválido")
   fimescolha

// Fim da execução
fimalgoritmo

// Faça um algoritmo que leia um número que represente
// um determinado mês do ano. Após a leitura escreva por
// extenso qual o mês lido. Caso o número digitado não
// esteja na faixa de 1..12, escreva uma mensagem informando
// o usuário do erro da digitação.