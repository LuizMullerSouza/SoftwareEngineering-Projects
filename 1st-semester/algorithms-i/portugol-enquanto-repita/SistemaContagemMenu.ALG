algoritmo "SistemaContagemMenu"

// Variáveis
var
   opcao, n: inteiro

// Início
inicio
   // Loop principal do menu
   repita
      Escreval("=================")
      Escreval("|    M E N U    |")
      Escreval("=================")
      Escreval("[1] Contar de 1 até 10")
      Escreval("[2] Contar de 10 até 1")
      Escreval("[3] Sair do programa")
      Escreval("=================")
      Escreva("Informe a opção: ")
      Leia(opcao)

      Escreval

      // Lógica condicional para verificar opção
      se (opcao = 1) entao
         n <- 1
         repita
            Escreva(n, ".. ")
            n <- n + 1
         ate (n > 10)
         Escreval

      senao
         se (opcao = 2) entao
            n <- 10
            repita
               Escreva(n, ".. ")
               n <- n - 1
            ate (n < 1)
            Escreval

         senao
            se (opcao <> 3) entao
               Escreval("Erro: digitou número errado/inválido")
            fimse
         fimse
      fimse

      Escreval
   ate (opcao = 3)

   // Saída de dados final
   Escreval("Saindo do sistema...")

// Fim da execução
fimalgoritmo

// Desenvolver um algoritmo que apresente um menu interativo
// com três opções: realizar uma contagem crescente (1 a 10),
// realizar uma contagem decrescente (10 a 1) ou sair do
// programa. O menu deve ser exibido repetidamente até que
// o usuário escolha a opção de saída.