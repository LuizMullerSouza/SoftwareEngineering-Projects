algoritmo "TeoremaPitagoras"

// Variáveis
var
   catA, catB, resultado: real

// Função
funcao calcularPitagoras (catetoA, catetoB: real): real
var
   hip: real
inicio
   // Processamento
   hip <- RaizQ(catetoA^2 + catetoB^2)

   // Retorno da hipotenusa
   retorne hip
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreval("Calculadora para Teorema de Pitágoras")
   Escreva("Informe o valor do Cateto A: ")
   Leia(catA)
   Escreva("Informe o valor do Cateto B: ")
   Leia(catB)
   Escreval

   // Chamada da função
   resultado <- calcularPitagoras(catA, catB)

   // Saída de dados
   Escreval("------------------------------")
   Escreval("Resultados:")
   Escreval("Cateto A: ", catA:0:2)
   Escreval("Cateto B: ", catB:0:2)
   Escreval("Hipotenusa: ", resultado:0:2)

// Fim da execução
fimalgoritmo

// Faça uma função  que calcule a hipotenusa. Os catetos
// são os dados de entrada e a hipotenusa é o dado de saída.
// Utilize a fórmula hip = sqrt(sqr(catetoA) + sqr(catetoB)),
// onde sqrt significa a raiz quadrada e sqr o quadrado de um
// número.