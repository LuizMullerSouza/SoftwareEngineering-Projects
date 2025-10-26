algoritmo "ReajusteSalarial"

// Variáveis
var
   cargo: inteiro
   salario, novoSalario, diferenca: real

// Início
inicio
   // Exibição do Menu
   Escreval("101 - Gerente")
   Escreval("102 - Engenheiro")
   Escreval("103 - Técnico")
   Escreval("Outro código - Outros cargos")
   Escreval("---------------------------------")

   // Entrada e leitura de dados
   Escreva("Informe seu cargo pelo código: ")
   Leia(cargo)
   Escreva("Informe seu salário: R$")
   Leia(salario)
   Escreval

   // Lógica condicional para cálculo
   se (cargo = 101) entao
      novoSalario <- salario * 1.1
      diferenca <- novoSalario - salario
   senao
      se (cargo = 102) entao
         novoSalario <- salario * 1.2
         diferenca <- novoSalario - salario
      senao
         se (cargo = 103) entao
            novoSalario <- salario * 1.3
            diferenca <- novoSalario - salario
         senao
            novoSalario <- salario * 1.4
            diferenca <- novoSalario - salario
         fimse
      fimse
   fimse

   // Saída de dados
   Escreval("Seu salário: R$", salario:0:2)
   Escreval("Seu salário reajustado: R$", novoSalario:0:2)
   Escreval("Diferença entre os salários: R$", diferenca:0:2)

// Fim da execução
fimalgoritmo

// Uma empresa concederá um aumento de salário aos seus
// funcionários, variável de acordo com o cargo, conforme a
// tabela abaixo. Faça um algoritmo que leia o salário e o cargo
// de um funcionário e calcule o novo salário. Se o cargo do
// funcionário não estiver na tabela, ele deverá, então, receber
// 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
// Código Cargo Percentual
// 101 Gerente 10%
// 102 Engenheiro 20%
// 103 Técnico 30%