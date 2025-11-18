algoritmo "CalculadorDeBhaskara"

// Variáveis
var
   a, b, c: real

// Procedimento
procedimento calcularEquacao (a, b, c: real)
var
   delta, x1, x2: real
inicio
   // Verificação lógica
   se (a = 0) entao
      Escreval("Erro: os valores não formam uma equação do segundo grau!")
   senao
      Escreval("Os valores formam uma equação do segundo grau!")

      // Cálculo do delta
      delta <- (b ^ 2) - (4 * a * c)

      // Verificação lógica das raízes
      se (delta < 0) entao
         Escreval("A equação não possui raízes reais, pois Delta é ", delta:0:2)
      senao
         // Cálculo de bhaskara
         x1 <- (-b + RaizQ(delta)) / (2 * a)
         x2 <- (-b - RaizQ(delta)) / (2 * a)

         Escreval("Raiz X1: ", x1:0:2)
         Escreval("Raiz X2: ", x2:0:2)
      fimse
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B: ")
   Leia(b)
   Escreva("Informe o valor de C: ")
   Leia(c)
   Escreval

   // Chamada do procedimento
   calcularEquacao(a, b, c)

// Fim da execução
fimalgoritmo

// Desenvolva um procedimento que receba três valores reais por parâmetro,
// representando os coeficientes A, B e C de uma equação. O procedimento deve
// verificar se A é zero. Caso contrário, calcule o Delta e, se possível,
// as raízes X1 e X2 pela fórmula de Bhaskara.