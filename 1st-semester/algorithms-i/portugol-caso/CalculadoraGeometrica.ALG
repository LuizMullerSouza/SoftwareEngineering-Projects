algoritmo "CalculadoraGeometrica"

// Variáveis
var
   valorG1, valorG2, resultado: real
   opcao: inteiro

// Início
inicio
   // Exibição do Menu
   Escreval("Menu de Opções")
   Escreval("1 | Calcular Área do Triângulo")
   Escreval("4 | Calcular Área do Retângulo")
   Escreval("7 | Calcular Volume da Esfera")
   Escreva("Informe o código da sua opção: ")
   Leia(opcao)
   Escreval

   // Lógica condicional para cálculo
   escolha opcao
      caso 1
         Escreval("--- Calcular Área do Triângulo ---")
         Escreva("Informe o valor da base: ")
         Leia(valorG1)
         Escreva("Informe o valor da altura: ")
         Leia(valorG2)
         resultado <- (valorG1 * valorG2) / 2
         Escreval("Área: ", resultado:0:2, " unidades quadradas")

      caso 4
         Escreval("--- Calcular Área do Retângulo ---")
         Escreva("Informe o valor do lado menor: ")
         Leia(valorG1)
         Escreva("Informe o valor do lado maior: ")
         Leia(valorG2)
         resultado <- valorG1 * valorG2
         Escreval("Área: ", resultado:0:2, " unidades quadradas")

      caso 7
         Escreval("--- Calcular Volume da Esfera ---")
         Escreva("Informe o valor do raio: ")
         Leia(valorG1)
         resultado <- (4 * Pi * valorG1 ^ 3) / 3
         Escreval("Volume: ", resultado:0:2, " unidades cúbicas")

      outrocaso
         Escreval("Erro: opção inválida")
   fimescolha

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que caso o usuário informar o numero:
// 1 – Calcular a área de um triangulo (área = (base x altura)/2)
// 4 – Calcular a área de um retângulo (área = lado x lado)
// 7 – Calcular o volume de uma esfera (volume = 4/3*Pi *R ^ 3).