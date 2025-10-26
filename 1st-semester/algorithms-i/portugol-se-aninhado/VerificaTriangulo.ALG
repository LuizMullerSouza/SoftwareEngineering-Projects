algoritmo "VerificaTriangulo"

// Variáveis
var
   a, b, c: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B: ")
   Leia(b)
   Escreva("Informe o valor de C: ")
   Leia(c)

   // Lógica condicional para saída de dados
   se ((a + b > c) e (a + c > b) e (b + c > a)) entao
      // Lógica condicional aninhada para verificar o tipo de triângulo
      se ((a = b) e (a = c)) entao
         Escreval("Seus valores formam um triângulo: Equilátero")
      senao
         se ((a <> b) e (a <> c) e (b <> c)) entao
            Escreval("Seus valores formam um triângulo: Escaleno")
         senao
            Escreval("Seus valores formam um triângulo: Isósceles")
         fimse
      fimse
   senao
      Escreval("Seus valores não formam um triângulo")
   fimse

// Fim da execução
fimalgoritmo

// Dado três valores, A, B e C, construa um algoritmo em
// PORTUGOL para verificar se estes valores podem ser
// valores dos lados de um triângulo, e se for, se é um triangulo
// escaleno, um triangulo equilátero ou um triangulo isósceles.