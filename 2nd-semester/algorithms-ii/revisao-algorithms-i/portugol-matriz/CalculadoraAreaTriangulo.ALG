algoritmo "CalculadoraAreaTriangulo"

// Variáveis
var
   triangulo: vetor[1..50, 1..2] de real
   area: vetor[1..50] de real
   i, j: inteiro

// Início
inicio
   // Entrada de dados
   Escreval("--- Leitura dos Lados dos Triângulos ---")
   para i <- 1 ate 50 passo 1 faca
      Escreval("--- Triângulo ", i, " ---")
      para j <- 1 ate 2 passo 1 faca
         Escreva("Informe o valor do ", j, "° cateto: ")
         Leia(triangulo[i,j])
      fimpara
   fimpara

   Escreval

   // Processamento e saída de dados
   Escreval("--- Áreas dos Triângulos ---")
   para i <- 1 ate 50 passo 1 faca
      // Cálculo da área
      area[i] <- (triangulo[i,1] * triangulo[i,2]) / 2

      Escreval("A área do ", i, "° triângulo é: ", area[i]:0:2)
   fimpara

// Fim da execução
fimalgoritmo

// Leia uma matriz 50 x 2, onde cada coluna corresponde
// a um lado de um triangulo retângulo. Declare um vetor
// que contenha a área dos respectivos triângulos e o escreva.