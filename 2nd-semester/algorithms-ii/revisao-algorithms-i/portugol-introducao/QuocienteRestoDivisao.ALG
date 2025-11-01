algoritmo "QuocienteRestoDivisao"

// Variáveis
var
   n1, n2, resultado, resto: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor inteiro (dividendo): ")
   Leia(n1)
   Escreva("Informe o segundo valor inteiro (divisor): ")
   Leia(n2)

   // Processamento
   resultado <- n1 div n2
   resto <- n1 mod n2

   // Saída de dados
   Escreval("O quociente da divisão de ", n1, " por ", n2, " foi ", resultado)
   Escreval("O resto da divisão de ", n1, " por ", n2, " foi ", resto)

// Fim da execução
fimalgoritmo

// Faça um Algoritmo que calcule o Quociente e o Resto
// da divisão de dois valores fornecidos pelo usuário