algoritmo "CalculoHipotenusa"

// Variáveis
var
   hipotenusa, catetoA, catetoB: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor do cateto A: ")
   Leia(catetoA)
   Escreva("Informe o valor do cateto B: ")
   Leia(catetoB)

   // Processamento
   hipotenusa <- RaizQ(catetoA ^ 2 + catetoB ^ 2)

   // Saída de dados
   Escreval("Valor da hipotenusa: ", hipotenusa:0:2)

// Fim da execução
fimalgoritmo

// Faça um algoritmo que calcule a hipotenusa de um
// triangulo.  Fórmula: h^2 = ca^2 + cb^2