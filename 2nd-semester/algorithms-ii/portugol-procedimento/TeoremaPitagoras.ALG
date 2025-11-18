algoritmo "TeoremaPitagoras"

// Variáveis
var
   catA, catB: real

// Procedimento
procedimento calcularPitagoras (catetoA, catetoB: real)
var
   hip: real
inicio
   // Processamento
   hip <- RaizQ(catetoA^2 + catetoB^2)

   // Saída de dados
   Escreval("------------------------------")
   Escreval("Resultados:")
   Escreval("Cateto A: ", catetoA:0:2)
   Escreval("Cateto B: ", catetoB:0:2)
   Escreval("Hipotenusa: ", hip:0:2)
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreval("Calculadora para Teorema de Pitágoras")
   Escreva("Informe o valor do Cateto A: ")
   Leia(catA)
   Escreva("Informe o valor do Cateto B: ")
   Leia(catB)

   // Chamada do procedimento
   calcularPitagoras(catA, catB)

// Fim da execução
fimalgoritmo

// Faça um procedimento que calcule a hipotenusa. Os catetos
// são os dados de entrada e a hipotenusa é o dado de saída.
// Utilize a fórmula hip = sqrt(sqr(catetoA) + sqr(catetoB)).