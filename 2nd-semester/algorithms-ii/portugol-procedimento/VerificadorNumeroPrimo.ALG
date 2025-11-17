algoritmo "VerificadorNumeroPrimo"

// Variáveis
var
   num: inteiro

// Procedimento
procedimento primo (n: inteiro)
var
   i, flag, resultado: inteiro
inicio
   // Inicialização
   flag <- 0

   // Lógica condicional para validação
   se (n <= 1) entao
      Escreval("Seu número não é válido para verificação!")
   senao
      // Processamento
      para i <- 1 ate n passo 1 faca
         resultado <- n mod i

         // Lógica condicional para contagem de divisores
         se (resultado = 0) entao
            flag <- flag + 1
         fimse
      fimpara

      // Saída de dados
      se (flag = 2) entao
         Escreval(n, " é um número primo")
      senao
         Escreval(n, " não é um número primo")
      fimse
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro: ")
   Leia(num)
   Escreval

   // Chamada do procedimento
   primo(num)

// Fim da execução
fimalgoritmo

// Faça um procedimento que recebe um número inteiro
// por parâmetro e verifique se o número informado é ou
// não primo. Números primos são aqueles que são somente
// divisíveis por 1 ou por eles mesmos.