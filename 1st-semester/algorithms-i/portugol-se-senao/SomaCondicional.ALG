algoritmo "SomaCondicional"

// Variáveis
var
   n1, n2, soma: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(n1)
   Escreva("Informe o segundo valor: ")
   Leia(n2)

   // Processamento
   soma <- n1 + n2

   se (soma > 20) entao
      soma <- soma - 5
   senao
      soma <- soma * 2
   fimse

   // Saída de dados
   Escreval("O resultado final é: ", soma)

// Fim da execução
fimalgoritmo

// Desenvolva um algoritmo que calcule
// 2 valores. Se a soma for maior que 20
// então subtraia 5 e escreva o resultado
// senão multiplique por 2. Apresente os
// resultados.