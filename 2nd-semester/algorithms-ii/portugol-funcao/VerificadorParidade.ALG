algoritmo "VerificadorParidade"

// Variáveis
var
   num: inteiro
   resultado: logico

// Função
funcao paridade (n: inteiro): logico
inicio
   // Lógica condicional para retorno
   se (n mod 2 = 0) entao
      retorne verdadeiro
   senao
      retorne falso
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro: ")
   Leia(num)
   Escreval

   // Chamada da função
   resultado <- paridade(num)

   // Saída de dados
   se (resultado = verdadeiro) entao
      Escreval(num, " é PAR!")
   senao
      Escreval(num, " é ÍMPAR!")
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função que receba um número
// como entrada e retorne verdade caso este
// número for par, e falso caso contrário.