algoritmo "ValidadorDeDatas"

// Variáveis
var
   dia, mes, ano: inteiro

// Procedimento
procedimento verificar (d, m, a: inteiro)
var
   diasNoMes: inteiro
inicio
   // Verificação lógica
   se (m < 1) ou (m > 12) ou (d < 1) ou (a < 1) entao
      Escreval("Data inválida!")
   senao
      // Condição lógica para validar
      se (m = 4) ou (m = 6) ou (m = 9) ou (m = 11) entao
         diasNoMes <- 30
      senao
         se (m = 2) entao
            se ((a mod 4 = 0) e (a mod 100 <> 0)) ou (a mod 400 = 0) entao
               diasNoMes <- 29
            senao
               diasNoMes <- 28
            fimse
         senao
            diasNoMes <- 31
         fimse
      fimse

      se (d > diasNoMes) entao
         Escreval("Data inválida! (O mês ", m, " só tem ", diasNoMes, " dias)")
      senao
         Escreval("Data válida!")
      fimse
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o dia: ")
   Leia(dia)
   Escreva("Informe o mês: ")
   Leia(mes)
   Escreva("Informe o ano: ")
   Leia(ano)
   Escreval

   // Chamada do procedimento
   verificar(dia, mes, ano)

// Fim da execução
fimalgoritmo

// Faça um procedimento que receba três números como entrada: d, m,
// a, representando um dia, um mês e um ano, respectivamente. O
// procedimento deve verificar se a data é válida (considerando anos
// bissextos) e imprimir o resultado.