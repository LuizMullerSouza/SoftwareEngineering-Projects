algoritmo "VerificadorDivisibilidade"

// Variáveis
var
   numerador, divisor: inteiro
   flag: logico

// Função
funcao verificadorDivisao (x, y: inteiro): logico
inicio
   // Verificação lógica
   se (y = 0) entao
      retorne falso
   senao
      // Validação lógica
      se (x mod y = 0) entao
         retorne verdadeiro
      senao
         retorne falso
      fimse
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o numerador: ")
   Leia(numerador)
   Escreva("Informe o divisor: ")
   Leia(divisor)

   // Chamada da função
   flag <- verificadorDivisao(numerador, divisor)

   // Saída de dados
   Escreval
   se (flag = verdadeiro) entao
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