algoritmo "CalculaQuadradoFuncao"

// Variáveis
var
   numero, resultado: real

// Função
funcao quadrado (x: real): real
inicio
   // Processamento
   x <- x * x

   // Retorno de X
   retorne x
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor real: ")
   Leia(numero)

   // Chamada da função
   resultado <- quadrado(numero)

   // Saída de dados
   Escreval("O quadrado de ", numero, " é: ", resultado)

// Fim da execução
fimalgoritmo

// Crie um algoritmo que utilize uma função
// que receba um número real e retorne o seu
// quadrado.