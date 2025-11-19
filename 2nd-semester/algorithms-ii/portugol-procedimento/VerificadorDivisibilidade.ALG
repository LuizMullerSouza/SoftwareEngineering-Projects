algoritmo "VerificadorDivisibilidade"

// Variáveis
var
   numerador, divisor, flag: inteiro

// Procedimento
procedimento verificarDivisao (x, y: inteiro)
inicio
   // Verificação lógica
   se (y = 0) entao
      flag <- 0
   senao
      // Validação lógica
      se (x mod y = 0) entao
         flag <- 1
      senao
         flag <- 0
      fimse
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o numerador: ")
   Leia(numerador)
   Escreva("Informe o divisor: ")
   Leia(divisor)

   // Chamada do procedimento
   verificarDivisao(numerador, divisor)

   // Saída de dados
   Escreval
   se (flag = 1) entao
      Escreval(numerador, " é divisível por ", divisor)
   senao
      Escreval(numerador, " não é divisível por ", divisor)
   fimse

// Fim da execução
fimalgoritmo

// Construa um algoritmo que verifique se um dado número é
// divisível por outro. Esse algoritmo deve possuir uma função
// ou procedimento para fazer a verificação se o número é
// divisível pelo outro.  Deve-se usar passagem de parâmetros
// e o resultado deve ser exibido pelo corpo principal do algoritmo.
// Ambos valores devem ser fornecidos pelo usuário.