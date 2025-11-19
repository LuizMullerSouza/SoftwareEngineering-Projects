algoritmo "ExemploPassagemPorReferencia"

// Variáveis
var
   numero, quadrado: real

// Função
funcao quadradoRaiz (var x: real): real
var
   r: real
inicio
   // Cálculo do quadrado
   r <- x * x

   // Cálculo da raiz quadrada na mémoria da variável
   x <- RaizQ(x)

   // Retorna o quadrado
   retorne r
fimfuncao

// Início
inicio
   // Entrada de dados
   Escreva("Informe um número: ")
   Leia(numero)
   Escreval

   // Chamada da função
   quadrado <- quadradoRaiz(numero)

   // Saída de dados
   Escreval("O quadrado (retorno) é: ", quadrado:0:2)
   Escreval("A raiz quadrada (variável global) é: ", numero:0:2)

// Fim da execução
fimalgoritmo

// Crie um algoritmo que utilize uma função com passagem
// de parâmetro por referência. A função deve retornar o
// quadrado do número, mas alterar a variável original para
// a sua raiz quadrada.