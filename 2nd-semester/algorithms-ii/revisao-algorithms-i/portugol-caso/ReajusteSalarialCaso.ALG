algoritmo "ReajusteSalarialCaso"

// Variáveis
var
   cod: inteiro
   salario, reajuste: real
   flag: logico

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe seu salário: R$")
   Leia(salario)
   Escreval("TÉCNICO - 1 | GERENTE - 2 | OUTRO - 3")
   Escreva("Digite o código coincidente com sua função: ")
   Leia(cod)
   Escreval

   // Inicialização
   flag <- verdadeiro

   // Lógica condicional para cálculo
   escolha cod
      caso 1
         reajuste <- salario * 1.5
      caso 2
         reajuste <- salario * 1.3
      caso 3
         reajuste <- salario * 1.2
      outrocaso
         Escreval("Erro: código inválido")
         flag <- falso
   fimescolha

   // Lógica condicional para saída de dados
   se (flag = verdadeiro) entao
      Escreval("Seu salário reajustado é: R$", reajuste:0:2)
   fimse

// Fim da execução
fimalgoritmo

// Faça um algoritmo para reajustar o salário de acordo
// com com o seguinte peso: Caso o funcionário for um
// técnico, o salário deve ser aumentado em 50%, caso
// for um gerente, aumentar 30% e caso contrario
// aumentar 20%.