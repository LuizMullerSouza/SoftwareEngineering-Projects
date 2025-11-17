algoritmo "VerificadorTipoTriangulo"

// Variáveis
var
   a, b, c: real

// Procedimento
procedimento formaTriangulo (x, y, z: real)
var
   flag: inteiro
inicio
   // Inicialização
   flag <- 0

   // Lógica condicional para formar um triângulo
   se ((x + y > z) e (x + z > y) e (y + z > x)) entao
      flag <- 1
   fimse

   // Lógica condicional para o tipo
   se (flag = 1) entao
      se ((x = y) e (x = z)) entao
         Escreval("Seus valores formam um triângulo EQUILÁTERO")
      senao
         se ((x <> y) e (x <> z) e (y <> z)) entao
            Escreval("Seus valores formam um triângulo ESCALENO")
         senao
            Escreval("Seus valores formam um triângulo ISÓCELES")
         fimse
      fimse
   senao
      Escreval("Seus valores NÃO formam um triângulo")
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor do Lado A: ")
   Leia(a)
   Escreva("Informe o valor do Lado B: ")
   Leia(b)
   Escreva("Informe o valor do Lado C: ")
   Leia(c)
   Escreval

   // Chamada do procedimento
   formaTriangulo(a, b, c)

// Fim da execução
fimalgoritmo

// Escreva um procedimento que receba 3 valores reais X,
// Y e Z e que verifique se esses valores podem ser os
// comprimentos dos lados de um triângulo e, neste caso,
// escrever qual o tipo de triângulo esses valores formam.