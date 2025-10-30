algoritmo "ReajusteSalarial"

// Variáveis
var
   cargo: inteiro
   salario, novoSalario: real
   flag: logico

// Início
inicio
   // Inicialização
   flag <- falso

   // Exibição do Menu
   Escreval("Menu de Cargos")
   Escreval("1 | Técnico")
   Escreval("4 | Gerente")
   Escreval("7 | Outros")
   Escreval("-------------------")

   // Entrada e leitura de dados
   Escreva("Informe o seu cargo: ")
   Leia(cargo)
   Escreva("Informe o valor do seu salário: R$")
   Leia(salario)

   // Lógica condicional para cálculo
   escolha cargo
      caso 1
         novoSalario <- salario * 1.5
         flag <- verdadeiro
      caso 4
         novoSalario <- salario * 1.3
         flag <- verdadeiro
      caso 7
         novoSalario <- salario * 1.2
         flag <- verdadeiro
   fimescolha

   // Lógica condicional para saída de dados
   se (flag = verdadeiro) entao
      Escreval("Salário reajustado: R$", novoSalario:0:2)
   senao
      Escreval("Os dados inseridos não se encaixam para reajuste")
   fimse

// Fim da execução
fimalgoritmo

// Faça um algoritmo para reajustar o salário de acordo com com
// o seguinte peso: Caso o funcionário for um técnico, o salário
// deve ser aumentado em 50%, caso for um gerente, aumentar 30%
// e caso contrario aumentar 20%.