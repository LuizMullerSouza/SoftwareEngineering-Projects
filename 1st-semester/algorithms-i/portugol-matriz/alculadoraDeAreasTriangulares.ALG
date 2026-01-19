algoritmo "CalculadoraDeAreasTriangulares"

// Variáveis
var
   matBaseAltura: vetor [1..50, 1..2] de real
   vetArea: vetor [1..50] de real
   i, j: inteiro

// Início
inicio
   Escreval("--- Preenchendo dados dos 50 Triângulos ---")

   // Entrada e leitura de dados
   para i <- 1 ate 50 passo 1 faca
      Escreval("Triângulo ", i, ":")
      para j <- 1 ate 2 passo 1 faca
         se (j = 1) entao
            Escreva(" - Digite a Base: ")
            Leia(matBaseAltura[i,j])
         senao
            Escreva(" - Digite a Altura: ")
            Leia(matBaseAltura[i,j])
         fimse
      fimpara
      Escreval
   fimpara

   Escreval("Calculando a Área dos 50 Triângulos...")
   Escreval
   Escreval("--- Relatório de Áreas ---")

   // Loop para cálculo e exibição do resultado
   para i <- 1 ate 50 passo 1 faca
      vetArea[i] <- (matBaseAltura[i,1] * matBaseAltura[i,2]) / 2
      Escreval("Triângulo ", i, " - Área: ", vetArea[i]:0:2)
   fimpara

// Fim da execução
fimalgoritmo

// Leia uma matriz 50 x 2, onde cada coluna corresponde a um lado
// de um triangulo retângulo. Declare um vetor que contenha a área
// dos respectivos triângulos e o escreva.