algoritmo "CalculoMediaEscolar"

// Variáveis
var
   n1, n2, n3, n4, n5, media: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe a primeira nota: ")
   Leia(n1)
   Escreva("Informe a segunda nota: ")
   Leia(n2)
   Escreva("Informe a terceira nota: ")
   Leia(n3)
   Escreva("Informe a quarta nota: ")
   Leia(n4)

   // Processamento de média anual
   media <- (n1 + n2 + n3 + n4) / 4

   // Lógica condicional para saída de dados
   se (media >= 7) entao
      Escreval("APROVADO")
   senao
      // Entrada de dados da nota de exame
      Escreval("O aluno está em EXAME.")
      Escreva("Informe sua quinta nota (nota de exame): ")
      Leia(n5)

      // Processamento de média anual com exame
      media <- (media + n5) / 2

      se (media >= 5) entao
         Escreval("APROVADO COM EXAME")
      senao
         Escreval("REPROVADO")
      fimse
   fimse

   // Saída de dados com a média final
   Escreval("Média Final: ", media:0:2)

// Fim da execução
fimalgoritmo

// Desenvolva uma algoritmo em PORTUGOL que leia os valores
// de quatro notas escolares bimestrais de um aluno (N1, N2, N3
// e N4). Calcule a média aritmética anual desse aluno e apresente
// a mensagem “APROVADO” se a média for maior ou igual a 7, se
// não, o algoritmo deve solicitar a quinta nota (nota de exame) do
// aluno e calcular a média aritmética de exame entre a média anual
// e a quinta nota. Se a média de exame for maior ou igual a 5, deve
// apresentar a mensagem “Aprovado com Exame” se não deve
// apresentar “REPROVADO”, por fim, deve apresentar a média final
// obtida pelo aluno.