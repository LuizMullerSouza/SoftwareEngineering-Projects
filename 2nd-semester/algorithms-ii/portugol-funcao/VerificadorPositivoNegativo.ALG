algoritmo "VerificadorPositivoNegativo"

// Variáveis
var
   num: inteiro
   ehPositivo: logico

// Função
funcao verificar (n: inteiro): logico
inicio
   // Lógica condicional para retorno
   se (n >= 0) entao
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

   // Chamada da função
   ehPositivo <- verificar(num)

   // Saída de dados
   Escreval
   se (ehPositivo = verdadeiro) entao
      Escreval("O número é POSITIVO.")
   senao
      Escreval("O número é NEGATIVO.")
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função que recebe um valor inteiro e
// verifica se o valor é positivo ou negativo. A função
// deve retornar um valor booleano. Sendo o número
// positivo retorna verdadeiro e se for negativo retorna
// falso.