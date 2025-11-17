algoritmo "CalculadoraFatorial"

// Variáveis
var
   num, res: inteiro

// Função
funcao calcularFatorial (numero: inteiro): inteiro
var
   i, fatorial: inteiro
inicio
   // Lógica condicional para validação
   se (numero < 0) entao
      retorne -1
   senao
      // Cálculo do fatorial
      fatorial <- 1
      para i <- 1 ate numero passo 1 faca
         fatorial <- fatorial * i
      fimpara

      // Retorno do fatorial
      retorne fatorial
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número para calcular o fatorial: ")
   Leia(num)
   Escreval

   // Chamada da função
   res <- calcularFatorial(num)

   // Lógica condicional para saída de dados
   se (res = -1) entao
      Escreval("Erro: Fatorial não definido para números negativos.")
   senao
      Escreval("O fatorial de ", num, " é: ", res)
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função para calcular o fatorial de um numero.
// Este numero será passado por parâmetro;