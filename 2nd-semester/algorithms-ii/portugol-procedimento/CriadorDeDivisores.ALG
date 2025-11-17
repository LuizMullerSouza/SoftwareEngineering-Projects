algoritmo "CriadorDeDivisores"

// Variáveis
var
   num: inteiro

// Procedimento
procedimento divisores (n: inteiro)
var
   resultado, i: inteiro
inicio
   // Lógica condicional para validação
   se (n <= 0) entao
      Escreval("Número menores que zero e o próprio zero não possuem divisores!")
   senao
      // Título
      Escreval("Divisores de ", n)
      Escreval("---------------")

      // Processamento
      para i <- 1 ate n passo 1 faca
         resultado <- n mod i

         // Lógica condicional para filtragem
         se (resultado = 0) entao
            Escreval(i)
         fimse
      fimpara
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro positivo: ")
   Leia(num)
   Escreval

   // Chamada do procedimento
   divisores(num)

// Fim da execução
fimalgoritmo

// Escreva um procedimento que receba um número inteiro
// positivo por parâmetro e escreva os divisores desse número.