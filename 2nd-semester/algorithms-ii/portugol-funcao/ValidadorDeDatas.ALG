algoritmo "ValidadorDeDatas"

// Variáveis
var
   dia, mes, ano: inteiro
   dataValida: logico

// Função
funcao verificar (d, m, a: inteiro): logico
var
   diasNoMes: inteiro
inicio
   // Verificação lógica
   se ((m < 1) ou (m > 12) ou (d < 1) ou (a < 1)) entao
      retorne falso
   fimse

   // Condição lógica para validar
   se ((m = 4) ou (m = 6) ou (m = 9) ou (m = 11)) entao
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

   // Retorne valor correspondente
   se (d > diasNoMes) entao
      retorne falso
   senao
      retorne verdadeiro
   fimse
fimfuncao

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

   // Chamada da função
   dataValida <- verificar(dia, mes, ano)

   // Saída de dados
   se (dataValida = verdadeiro) entao
      Escreval("Data válida!")
   senao
      Escreval("Data inválida!")
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função que receba três números como entrada: d, m,
// a, representando um dia, um mês e um ano, respectivamente.
// Retorne verdade caso d, m, a represente uma data válida, e falso
// caso contrário.