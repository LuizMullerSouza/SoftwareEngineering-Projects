algoritmo "CalculadoraMediaSemestral"

// Variáveis
var
   nota1, nota2: real

// Procedimento
procedimento calcularMedia (n1, n2: real)
var
   media: real
inicio
   // Processamento
   media <- (n1 + n2) / 2

   // Saída de dados
   Escreval("Sua média foi: ", media:0:1)

   // Lógica condicional para saída
   se (media >= 6) entao
      Escreval("PARABÉNS! Você foi aprovado.")
   senao
      Escreval("POXA! Você foi reprovado.")
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe a primeira nota: ")
   Leia(nota1)
   Escreva("Informe a segunda nota: ")
   Leia(nota2)

   // Chamada do procedimento
   calcularMedia(nota1, nota2)

// Fim da execução
fimalgoritmo

// Faça um procedimento que receba as duas notas por
// parâmetro e calcule e escreva a média semestral e a
// mensagem “PARABÉNS! Você foi aprovado!” somente
// se o aluno foi aprovado (considere 6.0 a média mínima
// para aprovação).