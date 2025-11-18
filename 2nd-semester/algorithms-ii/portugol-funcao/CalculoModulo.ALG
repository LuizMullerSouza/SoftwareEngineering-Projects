algoritmo "CalculoModulo"

// Variáveis
var
   num, resultado: inteiro

// Função
funcao calcularModulo (n: inteiro): inteiro
var
   nPositivo: inteiro
inicio
   // Lógica condicional para retorno
   se (n >= 0) entao
      retorne n
   senao
      nPositivo <- n * (-1)
      retorne nPositivo
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número inteiro: ")
   Leia(num)

   // Chamada da função
   resultado <- calcularModulo(num)

   // Saída de dados
   Escreval("|", num, "| = ", resultado)

// Fim da execução
fimalgoritmo

// Faça uma função que receba um número como
// entrada e retorne o módulo deste número.