algoritmo "CalculoBhaskara"

// Variáveis
var
   a, b, c, delta, x1, x2: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B: ")
   Leia(b)
   Escreva("Informe o valor de C: ")
   Leia(c)

   // Processamento do delta
   delta <- (b ^ 2) - (4 * a * c)

   // Processamento das raízes
   x1 <- ((-b) + RaizQ(delta)) / (2 * a)
   x2 <- ((-b) - RaizQ(delta)) / (2 * a)

   // Saída de dados
   Escreval("X1 = ", x1:0:2)
   Escreval("X2 = ", x2:0:2)

// Fim da execução
fimalgoritmo

// Desenvolva um algoritmo para encontrar
// as raízes de uma equação do tipo:
// Ax^2 + Bx + C