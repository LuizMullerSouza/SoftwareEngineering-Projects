algoritmo "ContadorIntervalo"

// Variáveis
var
   n: real
   digitados: inteiro

// Início
inicio
   // Inicialização
   digitados <- 0

   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe qualquer valor (0 para sair): ")
      Leia(n)

      // Lógica condicional para contagem
      se ((n >= 100) e (n <= 200)) entao
         digitados <- digitados + 1
      fimse

   ate (n = 0)

   // Saída de dados
   Escreval("Foram digitados ", digitados, " números entre 100 e 200")

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia números e imprima no final quantos
// números entre 100 e 200 foram digitados. Quando o valor 0 (zero) for
// lido, o algoritmo deve parar a sua execução.