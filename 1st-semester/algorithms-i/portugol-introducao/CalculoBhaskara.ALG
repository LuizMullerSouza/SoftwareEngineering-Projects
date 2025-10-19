algoritmo "CalculoBhaskara"

// Variáveis
var
   a, b, c, x1, x2, delta: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B: ")
   Leia(b)
   Escreva("Informe o valor de C: ")
   Leia(c)

   // Processamento
   delta <- (b ^ 2) - (4 * a * c)

   // Cálculo das raízes
   x1 <- ((-b) + RaizQ(delta)) / (2 * a)
   x2 <- ((-b) - RaizQ(delta)) / (2 * a)

   // Saída de dados
   Escreval("X': ", x1)
   Escreval("X'': ", x2)

// Fim da execução
fimalgoritmo

// Desenvolva um algoritmo para encontrar as raízes
// de uma equação do tipo: Ax² + Bx + C