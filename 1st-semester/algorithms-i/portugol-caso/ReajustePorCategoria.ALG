algoritmo "ReajustePorCategoria"

// Variáveis
var
   categoria: caractere
   salario, novoSalario: real
   flag: logico

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe sua categoria (A...Z): ")
   Leia(categoria)
   Escreva("Informe seu salário atual: R$")
   Leia(salario)

   // Inicialização
   flag <- verdadeiro

   // Lógica condicional para cálculo
   escolha categoria
      caso "A", "a", "C", "c", "F", "f", "H", "h"
         novoSalario <- salario * 1.1

      caso "B", "b", "D", "d", "E", "e", "I", "i", "J", "j", "T", "t"
         novoSalario <- salario * 1.15

      caso "K", "k", "G", "g"
         novoSalario <- salario * 1.25

      caso "L", "l", "M", "m", "N", "n", "O", "o", "P", "p", "Q", "q", "R", "r", "S", "s"
         novoSalario <- salario * 1.35

      caso "U", "u", "V", "v", "X", "x", "Y", "y", "W", "w", "Z", "z"
         novoSalario <- salario * 1.5

      outrocaso
         flag <- falso
   fimescolha

   // Lógica condicional para saída de dados
   se (flag = verdadeiro) entao
      Escreval("Salário reajustado: R$", novoSalario:0:2)
   senao
      Escreval("Erro: categoria inválida")
   fimse

// Fim da execução
fimalgoritmo

// Uma empresa irá dar um aumento de salário aos seus funcionários de acordo
// com a categoria de cada empregado. O aumento seguirá a seguinte regra:
// a) Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o salário;
// b) Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre o salário;
// c) Funcionários das categorias K e G ganharão 25% de aumento sobre o salário;
// d) Funcionários das categorias L, M, N, O, P, Q, R e S ganharão 35% de aumento sobre o salário
// e) Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento sobre o salário